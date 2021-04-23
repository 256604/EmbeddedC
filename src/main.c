#include <avr/io.h>
int main(void)
{
    DDRC|=(1<<PC0);//make C0 pin as output

    DDRB&=~(1<<PB0);//clear B0 pin 
    PORTB|=(1<<PB0);//set B0 pin

    DDRB&=~(1<<PB1);//clear B1 pin
    PORTB|=(1<<PB1);//set B1 pin

    while(1)
    {
        if((!(PINB&(1<<PB0)))&&(!(PINB&(1<<PB1))))//check whether B1 and B0 is logically high(i.e 1)
        {
            PORTC|=(1<<PC0);//set C0 pin
        }
        else
        {
            PORTC&=~(1<<PC0);//clear C0 pin
        }
    }
}
