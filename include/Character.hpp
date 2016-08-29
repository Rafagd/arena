#ifndef ARENA_CHARACTER_HPP
#define ARENA_CHARACTER_HPP

#include<SFML/Graphics.hpp>
#include<nlohmann/json.hpp>

namespace nm = nlohmann;

class Character
{
    public:
        Character(const char *name);
        virtual ~Character();

        void walk_left();
        void walk_right();
        void draw(const unsigned int frame, sf::RenderWindow *window);

    private:
        void load_sprite();
        void change_state(const char *state);

        std::string path = "";
        nm::json    data;
        sf::Image   image;
        sf::Texture texture;
        sf::Sprite  sprite;

        sf::Vector2i position { 0, 0 };
        int          walk_speed = 0;

        std::string state         = "";
        int         current_frame = 0;
        int         frame_count   = 0;
};

#endif
