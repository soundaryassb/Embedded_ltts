#include <avr/io.h>
#include <util/delay.h>

void activity1()
{
    // Direction of ports
    DDRB |= (1 << PB0);
    DDRD &= ~(1 << PD2);
    DDRD &= ~(1 << PD3);

    // PULL-UP +5V for push-buttons
    PORTD |= (1 << PD2);
    PORTD |= (1 << PD3);
    while (1)
    {
        // condition will turn to be true only when both switches are closed
        if (!(PIND&(1<<PD2)) && !(PIND&(1<<PD3)))
        {
            // LED set to ON if true
            PORTB |= (1 << PB0);
            _delay_ms(200);
        }
        else
        {
            // LED set to OFF if false.
            PORTB &= ~(1 << PB0);
            _delay_ms(200);
        }
    }
}
