/*
 * avr_time.h
 *
 * Created: 1/21/2018 06:39:11 PM
 *  Author: Duminda Kaviranga Gunawardhana
 */ 

#ifndef _ROS_H_
#define _ROS_H_

#include "ros/node_handle.h"
#include "Atmega32AHardware.h"

namespace ros
{
  typedef ros::NodeHandle_<Atmega32AHardware> NodeHandle;
}

#endif
