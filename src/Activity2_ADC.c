#include <avr/io.h>
#include<util/delay.h>
#define CONVERSION_INCOMPLETE !(ADCSRA&(1<<ADIF))
#define TEMPERATURE ADC

uint16_t Read_ADC(uint8_t channel)
{
    ADMUX&=0xf8;//to clear all bits except 3 LSB's for channel selection
    channel=channel&(0b00000111);//to get the binary value of channel
    ADMUX|=channel;//to select channel for ADC
    ADCSRA|=(1<<ADSC);//to do Sampling and Quantisation
    while(CONVERSION_INCOMPLETE);
    return(TEMPERATURE);
}
int ADC_Activity2(void)
{

    uint16_t temperature_in_digital_value;// Insert code
    temperature_in_digital_value=Read_ADC(0);
    _delay_ms(2000);


    return 0;
}
