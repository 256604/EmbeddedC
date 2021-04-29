#include <avr/io.h>
#include "Activity1_GPIO.h"
#include "Activity2_ADC.h"
#include "Activity3_PWM.h"
#include "Activity4_USART.h"

int main(void)

{   //LED configuration

    DDRB|=(1<<PB5);//make C0 pin as output (LED)

    //Seat occupancy switch configuration

    DDRB&=~(1<<PB0);//clear B0 pin (Seat occupancy switch input)
    PORTB|=(1<<PB0);//set B0 pin

    //Heater switch configuration

    DDRB&=~(1<<PB6);//clear B1 pin (Heater switch input)
    PORTB|=(1<<PB6);//set B1 pin

    //ADC Enable

    ADMUX=(1<<REFS0);//Set resolution as 10 bit.
    ADCSRA|=(1<<ADEN);//Set portC as ADC channel
    ADCSRA|=(7<<ADPS0);//Set Prescalar as 128

    //USART Enable and Initialization
    UBRR0L = 103;
    UBRR0H = (103>>8)&0x00ff;//Set 9600 as Baudrate
    UCSR0C|=(1<<UMSEL00);//Synchronous Data transfer enable
    UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01);//Set Data size as 8 bit
    UCSR0B =(1<<TXEN0)|(1<<TXCIE0);//enable Transmission and Transmission complete interrupt

    while(1)
   {
    GPIO_Activity1();//Seat occupancy and heater switch check
    ADC_Activity2();//To read temperature sensor and perform ADC
    PWM_Activity3();//To generate PWM pulse corresponding to ADC value
    USART_Activity4();//To send temperature value using USART
   }
    return 0;
}
