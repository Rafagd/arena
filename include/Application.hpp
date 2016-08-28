#ifndef ARENA_APPLICATION_HPP
#define ARENA_APPLICATION_HPP

#include<SFML/Graphics.hpp>
#include<nlohmann/json.hpp>

using namespace nlohmann;

class GameState;

class Application
{
    public:
        Application();
        virtual ~Application();

        void run();

    private:
        GameState        *state;
        sf::RenderWindow *window;

        json config;

        void pre_load();

        void input(unsigned int frame);
        void update(unsigned int frame);
        void draw(unsigned int frame);
};

#endif
