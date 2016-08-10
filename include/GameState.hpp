#ifndef ARENA_GAME_STATE_HPP
#define ARENA_GAME_STATE_HPP

#include<SFML/Graphics.hpp>

struct GameState
{
    virtual void input(const unsigned int frame, const sf::Event &event) = 0;
    virtual void update(const unsigned int frame) = 0;
    virtual void draw(const unsigned int frame, sf::RenderWindow *window) = 0;
};

#endif
