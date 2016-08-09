#include "Application.hpp"

#include<fstream>
#include<cstring>
#include<string>
#include<sstream>
#include<nlohmann/json.hpp>
#include<SFML/Graphics.hpp>

#include "FightState.hpp"

using namespace nlohmann;

Application::Application()
{
    state  = NULL;
    window = NULL;

    std::ifstream stream("assets/config.json");
    config = new json(stream);
    stream.close();
}

Application::~Application()
{
    if (state != NULL) {
        delete state;
    }

    if (window != NULL) {
        delete window;
    }

    delete config;
}

void Application::pre_load()
{
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Arena de Desafios");
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);

    draw(0);
}

void Application::input(unsigned int frame)
{
    sf::Event event;

    while (window.pollEvents(event)) {

        switch (event.type) {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyPressed:
                state.input(frame, &event);
                break;
        }
    }
}

void Application::update(unsigned int frame)
{
    state.update(frame);
}

void Application::draw(unsigned int frame)
{
    window.clear(sf::Color::Black);
    state.draw(frame, window);
    window.display();
}

void Application::run()
{
    pre_load();
    
    state = new FightState();

    sf::Clock clock();
    float offset = clock.getElapsedTime().asSeconds() - ((int) clock.getElapsedTime().asSeconds());

    unsigned int frame;
    unsigned int last_frame = -1;

    while (window.isOpen()) {
        frame = (int) ((clock.getElapsedTime().asSeconds() - offset) / (1f / 60f));

        input(frame);

        if (frame != last_frame) {
            update(frame);
            draw(frame);
        }

        last_frame = frame;
    }
}
