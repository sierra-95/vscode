#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN   PB0 // Change this to the appropriate pin

void init_LED() {
    // Set the LED pin as an output
    DDRB |= (1 << LED_PIN);
}

int main() {
    init_LED();

    while (1) {
        // Turn on the LED
        PORTB |= (1 << LED_PIN);

        // Delay for 1 second
        _delay_ms(1000);

        // Turn off the LED
        PORTB &= ~(1 << LED_PIN);

        // Delay for 1 second
        _delay_ms(1000);
    }

    return 0;
}
