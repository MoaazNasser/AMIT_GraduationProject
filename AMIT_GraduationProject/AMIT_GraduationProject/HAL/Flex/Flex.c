
#define F_CPU 16000000UL
#include "util/delay.h"
#include "Flex.h"

void    Flex_Init(void)
{
	DIO_SetPinDir(Flex0Port, Flex0Pin, INPUT);
	DIO_SetPinDir(Flex1Port, Flex1Pin, INPUT);
	DIO_SetPinDir(Flex2Port, Flex2Pin, INPUT);
	DIO_SetPinDir(Flex3Port, Flex3Pin, INPUT);
	DIO_SetPinDir(Flex4Port, Flex4Pin, INPUT);
}

uint16t Flex_Read(uint8_t FlexPin)
{
	switch(FlexPin)
	{
		case Flex0Pin:
		{
			return ADC_Read(Flex0Pin); break;
		}
		
		case Flex1Pin:
		{
			return ADC_Read(Flex1Pin); break;
		}
		
		case Flex2Pin:
		{
			return ADC_Read(Flex2Pin); break;
		}
		
		case Flex3Pin:
		{
			return ADC_Read(Flex3Pin); break;
		}
		
		case Flex4Pin:
		{
			return ADC_Read(Flex4Pin); break;
		}
		
		default:
		break;
	}
}