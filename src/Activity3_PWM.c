#include <avr/io.h>
#include"Activity2_ADC.h"

int PWM_Activity3(void)
{
    uint16_t temperature;

    //Timer 1(OC1A pin) in Fast PWM mode with prescalar as 64
    TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);

    DDRB|=(1<<PB1);//PWM Output at Pin B1

    temperature=Read_ADC(0);
    if(temperature>0 && temperature<=200)
        OCR1A=205; //20% duty cycle
    if(temperature>=210 && temperature<=500)
        OCR1A=410; //40% duty cycle
    if(temperature>=510 && temperature<=700)
        OCR1A=717; //70% duty cycle
    if(temperature>=710 && temperature<=1024)
        OCR1A=973; //95% duty cycle
    return 0;
}
