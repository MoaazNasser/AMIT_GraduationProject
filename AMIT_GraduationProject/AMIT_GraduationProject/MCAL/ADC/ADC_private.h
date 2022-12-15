

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#include "STD_TYPES.h"

#define SREG   (*(volatile uint8_t *) (0x5F))

#define ADC0        0
#define ADC1        1
#define ADC2        2
#define ADC3        3
#define ADC4        4
#define ADC5        5
#define ADC6        6
#define ADC7        7


#define  ADMUX (*( (volatile uint8_t *) 0x27))

#define  REFS1		7
#define  REFS0		6  
#define  ADLAR		5
#define  MUX4		4
#define  MUX3	    3
#define  MUX2	   	2
#define  MUX1		1
#define  MUX0		0


#define  ADCSRA  (*((volatile uint8_t *)0x26))

#define  ADEN		7
#define  ADSC		6
#define  ADATE		5
#define  ADIF		4
#define  ADIE	    3
#define  ADPS2	   	2
#define  ADPS1		1
#define  ADPS0		0

#define  ADC_REG  	(*((volatile uint16t *)0x24))

#endif /* ADC_PRIVATE_H_ */