

#ifndef LCD_H_
#define LCD_H_

#define F_CPU 16000000UL
#include "util/delay.h"

#include "LCD_Cfg.h"
#include "STD_TYPES.h"
#include "DIO.h"

#define  _8_BIT_MODE      1
#define  _4_BIT_MODE      2

void LCD_Init(void);
void LCD_WriteChar(uint8_t character);
void LCD_WriteNum (sint16_t number);
void LCD_WriteStr (const uint8_t *);
void LCD_WriteComm(uint8_t command);
void LCD_CLR(void);

#endif /* LCD_H_ */