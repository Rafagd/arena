#ifndef ARENA_FIGHT_STATE_HPP
#define ARENA_FIGHT_STATE_HPP

#include<nlohmann/json.hpp>

#include "GameState.hpp"
#include "Player.hpp"

using namespace nlohmann;

class FightState : public GameState
{
    public:
        FightState(json &config);
        virtual ~FightState();

        void input(const unsigned int frame, const sf::Event &event);
        void update(const unsigned int frame);
        void draw(const unsigned int frame, sf::RenderWindow *window);

    private:
        Player *player1;
        Player *player2;
};

#endif
