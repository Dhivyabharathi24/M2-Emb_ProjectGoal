#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB=DDRB | (1 << DDB1);

    while(1)
    {
        PORTB = PORTB | (1 << PORTB1);
        _delay_ms(1000);
        PORTB =PORTB & ~(1 << PORTB1);
        _delay_ms(1000);
    }
}
