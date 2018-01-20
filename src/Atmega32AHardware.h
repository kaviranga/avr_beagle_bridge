/*
 * Atmega32AHardware.h
 *
 * Created: 1/20/2018 10:31:43 AM
 *  Author: Duminda Kaviranga Gunawardhana
 */ 

#ifndef ATMEGA32AHARDWARE_H_
#define ATMEGA32AHARDWARE_H_

extern "C"{
	#include <avr/interrupt.h>
	#include <avr/wdt.h>
	#include "avr_time.h"
	#include "avr_usart.h"
}

class Atmega32AHardware {
	public:
	  Atmega32AHardware(){}

    // Initialize the AVR
    void init()
    {
      wdt_disable();
      avr_time_init();
      avr_uart_init();
      sei();
    }

    // Read a byte of data from ROS connection.
    // If no data, returns -1
    int read()
    {
      return avr_uart_receive_byte();
    }


    // Send a byte of data to ROS connection
    void write(uint8_t* data, int length)
    {
      for(int i = 0; i < length; i++)
      {
        avr_uart_send_byte(data[i]);
      }
    }


    // Returns milliseconds since start of program
    unsigned long time()
    {
      return avr_time_now();
    }
};

#endif /* ATMEGA32AHARDWARE_H_ */
