

#ifndef DIO_H_
#define DIO_H_

#include "DIO_private.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

enum{DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD};
enum{INPUT, OUTPUT, HIGH, LOW};
enum{Pin0, Pin1, Pin2, Pin3, Pin4, Pin5, Pin6, Pin7};

void    DIO_SetPinDir  (uint8_t port, uint8_t pin, uint8_t dir);  
void    DIO_SetPinVal  (uint8_t port, uint8_t pin, uint8_t val);   
uint8_t DIO_GetPinVal  (uint8_t port, uint8_t pin);               
void    DIO_TogPinVal  (uint8_t port, uint8_t pin);               

#endif /* DIO_H_ */