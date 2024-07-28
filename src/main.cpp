#include "gpio.h"
#include "interrupts.h"

void isr(void) {
    SET_BIT((reg_t *)0x23, 4);
}

int main(void) {
    Gpio::Pin led = Gpio::Pin::B4;
    Gpio::Pin sw  = Gpio::Pin::D3;

    Gpio::SetOutput(led);
    Gpio::SetHigh(led);
    Gpio::SetInput(sw, Gpio::InputMode::NoPullUp);

    CLR_BIT(SREG, 7);
    SET_BIT(EIMSK, 1);
    SET_BIT(EICRA, 3);
    SET_BIT(SREG, 7);

    Interrupt::AttachISR(Interrupt::IntVec::INT1, isr);
    for (;;) {
    }
}