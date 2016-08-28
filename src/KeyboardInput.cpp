#include "KeyboardInput.hpp"

KeyboardInput::KeyboardInput(nlohmann::json &bindings)
{
    this->bindings = &bindings;
}

KeyboardInput::~KeyboardInput()
{
}

void KeyboardInput::check(const unsigned int frame, const sf::Event &event)
{
}

Key KeyboardInput::last()
{
    if (!this->buffer.empty()) {
        return this->buffer.back();
    }

    return Key();
}
