#ifndef ARENA_PLAYER_HPP
#define ARENA_PLAYER_HPP

#include<SFML/Graphics.hpp>
#include<nlohmann/json.hpp>

#include<Character.hpp>
#include<Input.hpp>

using namespace nlohmann;

class Player
{
    public:
        Player(Input *controller, Character *character);
        virtual ~Player();

        void input(const unsigned int frame, const sf::Event &event);
        void update(const unsigned int frame);
        void draw(const unsigned int frame, sf::RenderWindow *window);

    private:
        Input     *controller;
        Character *character;
};

#endif
