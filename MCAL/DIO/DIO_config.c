/*
 * DIO_config.c
 *
 *  Created on: Sep 10, 2022
 *      Author: Mostafa Sayed
 */
#include "DIO_config.h"
#include "../../Units.h"
#include "DIO_Types.h"

// Configure Pins
// Write the Pins you want to configure as the following format
// {Port , Pin No , Direction (Input or Output) , internal Pull-Up or no (for Input Pins only)}
// Example:
// {PORT_A,PIN_2,INPUT,PULLUP_ON}
// DONT FORGET COMMA FOR MORE THAN ONE PINs


DIO_Configuration Pins_list[] =
{

	// Output Pin
		{PORT_A,PIN_0,INPUT,PULLUP_OFF},
		{PORT_A,PIN_1,OUTPUT},
		{PORT_A,PIN_2,OUTPUT},
		{PORT_A,PIN_3,OUTPUT},
    // Debug
		{PORT_C,PIN_0,OUTPUT},
		{PORT_C,PIN_1,OUTPUT},
		{PORT_C,PIN_2,OUTPUT},
		{PORT_C,PIN_3,OUTPUT},
		{PORT_C,PIN_4,OUTPUT},
		{PORT_C,PIN_5,OUTPUT},
		{PORT_C,PIN_6,OUTPUT},
		{PORT_C,PIN_7,OUTPUT},
};
