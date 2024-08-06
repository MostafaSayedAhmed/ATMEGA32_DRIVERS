/*
 * DIO_config.h
 *
 *  Created on: Sep 10, 2022
 *      Author: Mostafa Sayed
 */

#ifndef MCAL_DIO_DIO_CONFIG_H_
#define MCAL_DIO_DIO_CONFIG_H_

#include "DIO_Types.h"
#include "DIO.h"

#define SW  PORTA_0
#define LED PORTA_1

typedef struct{
	DIO_Port Port;
	DIO_Pin Pin;
	DDR_Direction Dir;
	PULLUP_Type Pullup;
} DIO_Configuration;

// Define number of pins based on contents of DIO_config.c
#define PIN_COUNT  12




extern DIO_Configuration Pins_list[];

#endif /* MCAL_DIO_DIO_CONFIG_H_ */
