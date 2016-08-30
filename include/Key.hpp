#ifndef ARENA_KEY_HPP
#define ARENA_KEY_HPP

#include<cstdint>

typedef enum key_type : uint8_t {
    NONE,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    JAB,
    STRONG,
    FIERCE,
    SHORT,
    FORWARD,
    ROUNDHOUSE,
    CONFIRM,
    CANCEL
} KeyType;

class Key
{
    public:
        Key()
        {
            frame = 0;
            key   = KeyType::NONE;
            hold  = -1;
        }

        Key(const int frame, KeyType key, int hold)
        {
            this->frame = frame;
            this->key   = key;
            this->hold  = hold;
        }

        unsigned int frame;
        KeyType      key;
        int          hold;

};

#endif
