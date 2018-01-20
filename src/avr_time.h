/*
 * avr_time.h
 *
 * Created: 1/20/2018 12:55:11 PM
 *  Author: Duminda Kaviranga Gunawardhana
 */ 


#ifndef AVR_TIME_H_
#define AVR_TIME_H_

#include <stdint.h>

void avr_time_init(void);
uint32_t avr_time_now(void);

#endif /* AVR_TIME_H_ */
