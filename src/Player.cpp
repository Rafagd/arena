#include "Player.hpp"

#include "Key.hpp"

Player::Player(Input *controller, Character *character)
{
    this->controller = controller;
    this->character  = character;
}

Player::~Player()
{
    delete controller;
    delete character;
}

void Player::input(const unsigned int frame, const sf::Event &event)
{
    controller->check(frame, event);

    Key last = controller->last();

    if (last.hold == -1) {
        switch (last.key) {
            case KeyType::LEFT:
                character->walk_left();
                break;

            case KeyType::RIGHT:
                character->walk_right();
                break;
        }
    }
}

void Player::update(const unsigned int frame)
{
}

void Player::draw(const unsigned int frame, sf::RenderWindow *window)
{
    character->draw(frame, window);
}
