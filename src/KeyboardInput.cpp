#include "KeyboardInput.hpp"

static sf::Keyboard::Key get_key(std::string key)
{
    if (key == "A") return sf::Keyboard::Key::A;
    if (key == "B") return sf::Keyboard::Key::B;
    if (key == "C") return sf::Keyboard::Key::C;
    if (key == "D") return sf::Keyboard::Key::D;
    if (key == "E") return sf::Keyboard::Key::E;
    if (key == "F") return sf::Keyboard::Key::F;
    if (key == "G") return sf::Keyboard::Key::G;
    if (key == "H") return sf::Keyboard::Key::H;
    if (key == "I") return sf::Keyboard::Key::I;
    if (key == "J") return sf::Keyboard::Key::J;
    if (key == "K") return sf::Keyboard::Key::K;
    if (key == "L") return sf::Keyboard::Key::L;
    if (key == "M") return sf::Keyboard::Key::M;
    if (key == "N") return sf::Keyboard::Key::N;
    if (key == "O") return sf::Keyboard::Key::O;
    if (key == "P") return sf::Keyboard::Key::P;
    if (key == "Q") return sf::Keyboard::Key::Q;
    if (key == "R") return sf::Keyboard::Key::R;
    if (key == "S") return sf::Keyboard::Key::S;
    if (key == "T") return sf::Keyboard::Key::T;
    if (key == "U") return sf::Keyboard::Key::U;
    if (key == "V") return sf::Keyboard::Key::V;
    if (key == "W") return sf::Keyboard::Key::W;
    if (key == "X") return sf::Keyboard::Key::X;
    if (key == "Y") return sf::Keyboard::Key::Y;
    if (key == "Z") return sf::Keyboard::Key::Z;

    if (key == "0") return sf::Keyboard::Key::Num0;
    if (key == "1") return sf::Keyboard::Key::Num1;
    if (key == "2") return sf::Keyboard::Key::Num2;
    if (key == "3") return sf::Keyboard::Key::Num3;
    if (key == "4") return sf::Keyboard::Key::Num4;
    if (key == "5") return sf::Keyboard::Key::Num5;
    if (key == "6") return sf::Keyboard::Key::Num6;
    if (key == "7") return sf::Keyboard::Key::Num7;
    if (key == "8") return sf::Keyboard::Key::Num8;
    if (key == "9") return sf::Keyboard::Key::Num9;

    if (key == "Escape")    return sf::Keyboard::Key::Escape;
    if (key == "LControl")  return sf::Keyboard::Key::LControl;
    if (key == "LShift")    return sf::Keyboard::Key::LShift;
    if (key == "LAlt")      return sf::Keyboard::Key::LAlt;
    if (key == "LSystem")   return sf::Keyboard::Key::LSystem;
    if (key == "RControl")  return sf::Keyboard::Key::RControl;
    if (key == "RShift")    return sf::Keyboard::Key::RShift;
    if (key == "RAlt")      return sf::Keyboard::Key::RAlt;
    if (key == "RSystem")   return sf::Keyboard::Key::RSystem;
    if (key == "Menu")      return sf::Keyboard::Key::Menu;
    if (key == "Return")    return sf::Keyboard::Key::Return;
    if (key == "Space")     return sf::Keyboard::Key::Space;
    if (key == "BackSpace") return sf::Keyboard::Key::BackSpace;
    if (key == "Tab")       return sf::Keyboard::Key::Tab;
    if (key == "PageUp")    return sf::Keyboard::Key::PageUp;
    if (key == "PageDown")  return sf::Keyboard::Key::PageDown;
    if (key == "End")       return sf::Keyboard::Key::End;
    if (key == "Home")      return sf::Keyboard::Key::Home;
    if (key == "Insert")    return sf::Keyboard::Key::Insert;
    if (key == "Delete")    return sf::Keyboard::Key::Delete;
    if (key == "Equal")     return sf::Keyboard::Key::Equal;

    if (key == "[")  return sf::Keyboard::Key::LBracket;
    if (key == "]")  return sf::Keyboard::Key::RBracket;
    if (key == ";")  return sf::Keyboard::Key::SemiColon;
    if (key == ",")  return sf::Keyboard::Key::Comma;
    if (key == ".")  return sf::Keyboard::Key::Period;
    if (key == "'")  return sf::Keyboard::Key::Quote;
    if (key == "/")  return sf::Keyboard::Key::Slash;
    if (key == "\\") return sf::Keyboard::Key::BackSlash;
    if (key == "~")  return sf::Keyboard::Key::Tilde;
    if (key == "-")  return sf::Keyboard::Key::Dash;

    if (key == "Num0")  return sf::Keyboard::Key::Numpad0;
    if (key == "Num1")  return sf::Keyboard::Key::Numpad1;
    if (key == "Num2")  return sf::Keyboard::Key::Numpad2;
    if (key == "Num3")  return sf::Keyboard::Key::Numpad3;
    if (key == "Num4")  return sf::Keyboard::Key::Numpad4;
    if (key == "Num5")  return sf::Keyboard::Key::Numpad5;
    if (key == "Num6")  return sf::Keyboard::Key::Numpad6;
    if (key == "Num7")  return sf::Keyboard::Key::Numpad7;
    if (key == "Num8")  return sf::Keyboard::Key::Numpad8;
    if (key == "Num9")  return sf::Keyboard::Key::Numpad9;
    if (key == "Num+")  return sf::Keyboard::Key::Add;
    if (key == "Num-")  return sf::Keyboard::Key::Subtract;
    if (key == "Num*")  return sf::Keyboard::Key::Multiply;
    if (key == "Num/")  return sf::Keyboard::Key::Divide;

    if (key == "Up")    return sf::Keyboard::Key::Up;
    if (key == "Down")  return sf::Keyboard::Key::Down;
    if (key == "Left")  return sf::Keyboard::Key::Left;
    if (key == "Right") return sf::Keyboard::Key::Right;

    if (key == "F1")    return sf::Keyboard::Key::F1;
    if (key == "F2")    return sf::Keyboard::Key::F2;
    if (key == "F3")    return sf::Keyboard::Key::F3;
    if (key == "F4")    return sf::Keyboard::Key::F4;
    if (key == "F5")    return sf::Keyboard::Key::F5;
    if (key == "F6")    return sf::Keyboard::Key::F6;
    if (key == "F7")    return sf::Keyboard::Key::F7;
    if (key == "F8")    return sf::Keyboard::Key::F8;
    if (key == "F9")    return sf::Keyboard::Key::F9;
    if (key == "F10")   return sf::Keyboard::Key::F10;
    if (key == "F11")   return sf::Keyboard::Key::F11;
    if (key == "F12")   return sf::Keyboard::Key::F12;
    if (key == "Pause") return sf::Keyboard::Key::Pause;
}

KeyboardInput::KeyboardInput(nlohmann::json &bindings)
{
    this->bindings = &bindings;
    
    #define ki_mapping(bind, key, def) ({  \
        auto b = bindings[bind];           \
        if (b != nullptr) {                \
            mappings[get_key(b)] = key;    \
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
