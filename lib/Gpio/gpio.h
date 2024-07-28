#pragma once

#include "types.h"

namespace gpio {
    constexpr uint8 INPUT  = 0;
    constexpr uint8 OUTPUT = 1u;

    constexpr uint8 LOW  = 0;
    constexpr uint8 HIGH = 1u;

    constexpr uint8 PB0 =  0u;
    constexpr uint8 PB1 =  1u;
    constexpr uint8 PB2 =  2u;
    constexpr uint8 PB3 =  3u;
    constexpr uint8 PB4 =  4u;
    constexpr uint8 PB5 =  5u;
    constexpr uint8 PB6 =  6u;
    constexpr uint8 PB7 =  7u;
    constexpr uint8 PC0 = 10u;
    constexpr uint8 PC1 = 11u;
    constexpr uint8 PC2 = 12u;
    constexpr uint8 PC3 = 13u;
    constexpr uint8 PC4 = 14u;
    constexpr uint8 PC5 = 15u;
    constexpr uint8 PC6 = 16u;
    constexpr uint8 PD0 = 20u;
    constexpr uint8 PD1 = 21u;
    constexpr uint8 PD2 = 22u;
    constexpr uint8 PD3 = 23u;
    constexpr uint8 PD4 = 24u;
    constexpr uint8 PD5 = 25u;
    constexpr uint8 PD6 = 26u;
    constexpr uint8 PD7 = 27u;

    void pinMode(uint8 pin, uint8 mode);
    void setPinState(uint8 pin, uint8 state);
    void setPinHigh(uint8 pin);
    void setPinLow(uint8 pin);
    void togglePin(uint8 pin);
    uint8 readPin(uint8 pin);
}