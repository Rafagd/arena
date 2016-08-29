#include "KeyboardInput.hpp"

KeyboardInput::KeyboardInput(nlohmann::json &bindings)
{
    this->bindings = &bindings;
    
    #define ki_mapping(bind, key, def) ({  \
        auto b = bindings[bind];           \
        if (b != nullptr) {                \
            sf::Keyboard::Key k = b;       \
            mappings[k] = key;             \
        } else {                           \
            mappings[def] = key;           \
        }                                  \
    })

    ki_mapping("up",         KeyType::UP,         sf::Keyboard::Key::W);
    ki_mapping("down",       KeyType::DOWN,       sf::Keyboard::Key::S);
    ki_mapping("left",       KeyType::LEFT,       sf::Keyboard::Key::A);
    ki_mapping("right",      KeyType::RIGHT,      sf::Keyboard::Key::D);
    ki_mapping("jab",        KeyType::JAB,        sf::Keyboard::Key::U);
    ki_mapping("strong",     KeyType::STRONG,     sf::Keyboard::Key::I);
    ki_mapping("fierce",     KeyType::FIERCE,     sf::Keyboard::Key::O);
    ki_mapping("short",      KeyType::SHORT,      sf::Keyboard::Key::J);
    ki_mapping("forward",    KeyType::FORWARD,    sf::Keyboard::Key::K);
    ki_mapping("roundhouse", KeyType::ROUNDHOUSE, sf::Keyboard::Key::L);

    #undef ki_mapping
}

KeyboardInput::~KeyboardInput()
{
}

void KeyboardInput::check(const unsigned int frame, const sf::Event &event)
{
    std::cout << mappings[event.key.code] << std::endl;
}

Key KeyboardInput::last()
{
    if (!this->buffer.empty()) {
        return this->buffer.back();
    }

    return Key();
}
