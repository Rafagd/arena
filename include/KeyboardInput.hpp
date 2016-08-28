#ifndef ARENA_KEYBOARD_INPUT_HPP
#define ARENA_KEYBOARD_INPUT_HPP

#include<vector>
#include<SFML/Graphics.hpp>
#include<nlohmann/json.hpp>

#include "Input.hpp"
#include "Key.hpp"

class KeyboardInput : public Input
{
    public:
        KeyboardInput(nlohmann::json &bindings);
        virtual ~KeyboardInput();

        void check(const unsigned int frame, const sf::Event &event);
        Key last();

    private:
        nlohmann::json   *bindings;
        std::vector<Key>  buffer;
};

#endif
