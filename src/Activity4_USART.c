#include<avr/io.h>
#include<util/delay.h>
#include"Activity2_ADC.h"
#define TRANSMISSION_IS_NOT_READY !(UCSR0A & (1<<UDRE0))

void USARTWriteData(uint8_t temperature_in_deg_C)
{
    while(TRANSMISSION_IS_NOT_READY);
    UDR0=temperature_in_deg_C;//Write the value to Buffer register
}
int USART_Activity4(void)
{
    uint16_t temperature;
    temperature=Read_ADC(0);//get temperature value in digital from ADC

    //Temperature value in deg C for various digital value from ADC
    if(temperature>0 && temperature<=200)
        USARTWriteData(20);
    if(temperature>=210 && temperature<=500)
        USARTWriteData(25);
    if(temperature>=510 && temperature<=700)
        USARTWriteData(29);
    if(temperature>=710 && temperature<=1024)
        USARTWriteData(33);
    return 0;
}
