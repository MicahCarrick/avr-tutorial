#define F_CPU 1000000UL     /* 1 MHz internal RC Oscillator */

#include <avr/io.h>
#include <util/delay.h>

int
main (void)
{
    DDRB |= (1 << DDB0); 
    
    while(1) 
    {
        PORTB ^= _BV(PB0);
        _delay_ms(500);
    }
}
     

