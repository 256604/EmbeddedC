#include <avr/io.h>
#define SEAT_OCCUPANCY_SWITCH_ON (!(PINB&(1<<PB0)))
#define HEATER_SWITCH_ON (!(PINB&(1<<PB6)))
#define OUTPUT_LED_ON PORTB|=(1<<PB5)
#define OUTPUT_LED_OFF PORTB&=~(1<<PB5)

int GPIO_Activity1(void)
{

        if(SEAT_OCCUPANCY_SWITCH_ON&&HEATER_SWITCH_ON)//check whether B1 and B0 is logically high(i.e 1)
        {
            OUTPUT_LED_ON;//set C0 pin
        }
        else
        {
            OUTPUT_LED_OFF;//clear C0 pin
        }

    return 0;
}
