#ifndef ACTIVITY4_USART_H_INCLUDED
#define ACTIVITY4_USART_H_INCLUDED
/**
 * @brief Write temperature value to buffer
 * 
 */
void USARTWriteData(uint8_t );
/**
 * @brief  To send temperature value using USART 
 * 
 * @return int return 0
 */
int USART_Activity4(void);
/**
 * @brief To perform ADC for temperature sensor input
 * 
 * @return uint16_t Digital value of temperature
 */
uint16_t Read_ADC(uint8_t );

#endif // ACTIVITY4_USART_H_INCLUDED
