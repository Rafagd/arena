#include "Character.hpp"

#include<fstream>
#include<nlohmann/json.hpp>

namespace nm = nlohmann;

Character::Character(const char *name)
{
    path  = "assets/chars/";
    path += name;
    path += "/";

    std::ifstream stream(path + "data.json");
    data = nm::json::parse(stream);
    stream.close();

    load_sprite();

    change_state("idle");
}

Character::~Character()
{
}

void Character::load_sprite()
{
    image.loadFromFile(path + data["image"].get<std::string>());
    image.createMaskFromColor(sf::Color::Green);

    texture.loadFromImage(image);

    sprite.setTexture(texture);
    sprite.scale(2.f, 2.f);
}

void Character::change_state(const char *state)
{
    this->state   = state;
    current_frame = 0;
    frame_count   = data[state]["frames"].size();
}

void Character::walk_left()
{
    position.x -= walk_speed;
}

void Character::walk_right()
{
    position.x += walk_speed;
}

void Character::draw(const unsigned int frame, sf::RenderWindow *window)
{
    auto cframe = data[state]["frames"][current_frame];

    sprite.setTextureRect(sf::IntRect(
        position.x + (int) cframe["x"],
        position.y + (int) cframe["y"],
        cframe["w"], cframe["h"]
    ));

    window->draw(sprite);

    current_frame = (current_frame + 1) % frame_count;
}
