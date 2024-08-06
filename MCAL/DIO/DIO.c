#include "DIO.h"

// DIO_init used to initiate pin configured in DIO_config.c
void DIO_init()
{
	// Any embedded code require declaring variable before using it in loops
	unsigned char i = 0;

	// Loop used to configure each pin
	for(i = 0 ; i < PIN_COUNT ;i++)
	{
		switch (Pins_list[i].Port){
		case PORT_A:
			if(Pins_list[i].Dir == OUTPUT){
				SET_BIT(DDRA,Pins_list[i].Pin);
			}
			else{
				CLR_BIT(DDRA,Pins_list[i].Pin);
		        if(Pins_list[i].Pullup == PULLUP_ON){
					SET_BIT(PORTA,Pins_list[i].Pin);
					}
				else
					{
					CLR_BIT(PORTA,Pins_list[i].Pin);
					}
					}
			break;
		case PORT_B:
			if(Pins_list[i].Dir == OUTPUT){
				SET_BIT(DDRB,Pins_list[i].Pin);
			}
			else{
				CLR_BIT(DDRB,Pins_list[i].Pin);
		        if(Pins_list[i].Pullup == PULLUP_ON){
					SET_BIT(PORTB,Pins_list[i].Pin);
					}
				else
					{
					CLR_BIT(PORTB,Pins_list[i].Pin);
					}
					}
			break;
		case PORT_C:
			if(Pins_list[i].Dir == OUTPUT){
				SET_BIT(DDRC,Pins_list[i].Pin);
			}
			else{
				CLR_BIT(DDRC,Pins_list[i].Pin);
		        if(Pins_list[i].Pullup == PULLUP_ON){
					SET_BIT(PORTC,Pins_list[i].Pin);
					}
				else
					{
					CLR_BIT(PORTC,Pins_list[i].Pin);
					}
					}
			break;
		case PORT_D:
			if(Pins_list[i].Dir == OUTPUT){
				SET_BIT(DDRD,Pins_list[i].Pin);
			}
			else{
				CLR_BIT(DDRD,Pins_list[i].Pin);
		        if(Pins_list[i].Pullup == PULLUP_ON){
					SET_BIT(PORTD,Pins_list[i].Pin);
					}
				else
					{
					CLR_BIT(PORTD,Pins_list[i].Pin);
					}
					}
			break;
		}

		}
	}

// Function used to write on Digital Output Pin either HIGH or LOW
void DIO_Write(channel_type channel, DIO_Level level )
{
	DIO_Port Port = channel/8;
	DIO_Pin Pin = channel%8;
	if(Port == PORT_A)
	{
	if(level == HIGH) SET_BIT(PORTA,Pin);
	else CLR_BIT(PORTA,Pin);
	}
	if(Port == PORT_B)
	{
	if(level == HIGH) SET_BIT(PORTB,Pin);
	else CLR_BIT(PORTB,Pin);
	}
	if(Port == PORT_C)
	{
	if(level == HIGH) SET_BIT(PORTC,Pin);
	else CLR_BIT(PORTC,Pin);
	}
	if(Port == PORT_D)
	{
	if(level == HIGH) SET_BIT(PORTD,Pin);
	else CLR_BIT(PORTD,Pin);
	}
}

// Function used to Read from input pin
DIO_Level DIO_Read(channel_type channel)
{
	DIO_Port Port = channel/8;
	DIO_Pin Pin = channel%8;
	if      (Port == PORT_A)
	{
		if(GET_BIT(PINA,Pin) == 0) return LOW;
		else                        return HIGH;
	}

	else if (Port == PORT_B)
	{
		if(GET_BIT(PINB,Pin) == 0)  return LOW;
		else                        return HIGH;
	}
	else if (Port == PORT_C)
	{
		if(GET_BIT(PINC,Pin) == 0) return LOW;
		else                        return HIGH;
	}
	else
	{
		if(GET_BIT(PIND,Pin) == 0) return LOW;
		else                        return HIGH;
	}
}

// Function used to toggle Digital Output Pin
void DIO_Flip(channel_type channel)
{
	DIO_Port Port = channel/8;
	DIO_Pin Pin = channel%8;
	if      (Port == PORT_A)
	{
		TOG_BIT(PORTA,Pin);
	}

	else if (Port == PORT_B)
	{
		TOG_BIT(PORTB,Pin);
	}
	else if (Port == PORT_C)
	{
		TOG_BIT(PORTC,Pin);
	}
	else
	{
		TOG_BIT(PORTD,Pin);
	}
}
