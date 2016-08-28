#ifndef ARENA_CHARACTER_HPP
#define ARENA_CHARACTER_HPP

#include<SFML/Graphics.hpp>

class Character
{
    public:
        Character(const char *name);
        virtual ~Character();

        void walk_left();
        void walk_right();
        void draw(const unsigned int frame, sf::RenderWindow *window);
};

#endif
