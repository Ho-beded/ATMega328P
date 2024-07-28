#pragma once

#include "gpio.h"
#include "reg_map.h"
#include "reg_op.h"
#include "types.h"

namespace gpio {
    namespace {
        uint8 getPortIndex(uint8 pin) {
            return pin / 10u;
        }

        uint8 getPinIndex(uint8 pin) {
            return pin % 10u;
        }
    }

    void pinMode(uint8 pin, uint8 mode) {
        volatile uint8 *_ddr = DDRB + (3 * getPortIndex(pin));
        WRITE_BIT(_ddr, getPinIndex(pin), mode);
    }

    void setPinState(uint8 pin, uint8 state) {
        volatile uint8 *_port = PORTB + (3 * getPortIndex(pin));
        WRITE_BIT(_port, getPinIndex(pin), state);
    }

    void setPinHigh(uint8 pin) {
        volatile uint8 *_port = PORTB + (3 * getPortIndex(pin));
        WRITE_BIT(_port, getPinIndex(pin), HIGH);
    }

    void setPinLow(uint8 pin) {
        volatile uint8 *_port = PORTB + (3 * getPortIndex(pin));
        WRITE_BIT(_port, getPinIndex(pin), LOW);
    }

    void togglePin(uint8 pin) {
        volatile uint8 *_pin = PINB + (3 * getPortIndex(pin));
        WRITE_BIT(_pin, getPinIndex(pin), HIGH);
    }

    uint8 readPin(uint8 pin) {
        volatile uint8 *_pin = PINB + (3 * getPortIndex(pin));
        return READ_BIT(_pin, getPinIndex(pin));
    }
}