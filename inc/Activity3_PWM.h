#ifndef ACTIVITY3_PWM_H_INCLUDED
#define ACTIVITY3_PWM_H_INCLUDED
/**
 * @brief To generate PWM pulse corresponding to ADC value
 * 
 * @return int return 0
 */
int PWM_Activity3(void);
/**
 * @brief To perform ADC for temperature sensor input
 * 
 * @return uint16_t Digital value of temperature 
 */
uint16_t Read_ADC(uint8_t );


#endif // ACTIVITY3_PWM_H_INCLUDED
