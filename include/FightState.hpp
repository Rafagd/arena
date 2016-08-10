#ifndef ARENA_FIGHT_STATE_HPP
#define ARENA_FIGHT_STATE_HPP

#include "GameState.hpp"

class FightState : public GameState
{
    void input(const unsigned int frame, const sf::Event &event);
    void update(const unsigned int frame);
    void draw(const unsigned int frame, sf::RenderWindow *window);
};

#endif
