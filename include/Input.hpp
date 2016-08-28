#ifndef ARENA_INPUT_HPP
#define ARENA_INPUT_HPP

#include<SFML/Graphics.hpp>

class Key;

struct Input
{
    virtual void check(const unsigned int frame, const sf::Event &event) = 0;
    virtual Key last() = 0;
};

#endif
