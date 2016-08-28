#include "FightState.hpp"

#include "Character.hpp"
#include "KeyboardInput.hpp"

FightState::FightState(json &config)
{
    player1 = new Player(new KeyboardInput(config["player1"]), new Character("aoko"));
    player2 = new Player(new KeyboardInput(config["player2"]), new Character("aoko"));
}

FightState::~FightState()
{
    delete player1;
    delete player2;
}

void FightState::input(const unsigned int frame, const sf::Event &event)
{
    player1->input(frame, event);
    player2->input(frame, event);
}

void FightState::update(const unsigned int frame)
{
    player1->update(frame);
    player2->update(frame);
}

void FightState::draw(const unsigned int frame, sf::RenderWindow *window)
{
    player1->draw(frame, window);
    player2->draw(frame, window);
}

