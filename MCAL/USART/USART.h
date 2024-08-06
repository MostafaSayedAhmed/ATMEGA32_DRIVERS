/*
 * USART.h
 *
 *  Created on: Sep 26, 2022
 *      Author: Mostafa Sayed
 */

#ifndef MCAL_USART_USART_H_
#define MCAL_USART_USART_H_
#include "../DIO/DIO.h"
#include "USART_config.h"

void USART_init();

void USART_Write(unit16 Data);

unit16 USART_Read();

void USART_Flush(void);

#endif /* MCAL_USART_USART_H_ */
