/*
 * avr_usart.h
 *
 * Created: 1/20/2018 11:40:43 PM
 *  Author: Duminda Kaviranga Gunawardhana
 */

#ifndef AVR_USART_H_
#define AVR_USART_H_

#ifndef F_CPU
#define F_CPU 16000000UL // 16Mhz clock speed
#endif

#include <avr/io.h>

void avr_uart_init(void);
void avr_uart_send_byte(uint8_t tx_byte);
int16_t avr_uart_receive_byte(void);


#endif /* AVR_USART_H_ */
