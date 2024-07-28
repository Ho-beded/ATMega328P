#include "gpio.h"

int main(void) {
    gpio::pinMode(gpio::PD2, gpio::INPUT);
    gpio::pinMode(gpio::PB5, gpio::OUTPUT);
    for(;;) {
        gpio::setPinState(gpio::PB5, !gpio::readPin(gpio::PD2));
    }
}