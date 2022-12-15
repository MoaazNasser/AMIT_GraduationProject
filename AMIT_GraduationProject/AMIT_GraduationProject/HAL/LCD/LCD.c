
#include "LCD.h"

void LCD_Init(void)
{
	DIO_SetPinDir(LCD_EN_PORT, LCD_EN_PIN, OUTPUT);
	DIO_SetPinDir(LCD_RW_PORT, LCD_RW_PIN, OUTPUT);
	DIO_SetPinDir(LCD_RS_PORT, LCD_RS_PIN, OUTPUT);
		
	DIO_SetPinDir(LCD4_DATA_PORT,LCD4_DATA_PIN,OUTPUT);
	DIO_SetPinDir(LCD5_DATA_PORT,LCD5_DATA_PIN,OUTPUT);
	DIO_SetPinDir(LCD6_DATA_PORT,LCD6_DATA_PIN,OUTPUT);
	DIO_SetPinDir(LCD7_DATA_PORT,LCD7_DATA_PIN,OUTPUT);
	
	_delay_ms(1000);
	
	LCD_WriteComm(0x33);   // 4-bit mode
	LCD_WriteComm(0x32);   // 4-bit mode
	LCD_WriteComm(0x28);   // 4-bit mode
	LCD_WriteComm(0x0C);   // Display ON, cursor OFF
	LCD_WriteComm(0x01);   // Clear
	LCD_WriteComm(0x02);   // Return Home
	LCD_WriteComm(0x06);   // Write from left to right
}

void LCD_WriteChar(uint8_t character)
{	
	DIO_SetPinVal(LCD_RS_PORT,LCD_RS_PIN,HIGH);
	DIO_SetPinVal(LCD_RW_PORT,LCD_RW_PIN,LOW);

	LCD_DATA_REG = ((character & 0xF0) | (LCD_DATA_REG & 0x0F));                               // (0101 0011 & 1111 0000)        (0100 1101 & 0000 1111)
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,HIGH);                                                //        0101 0000           |          0000 1101
	_delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,LOW);
	_delay_ms(5);
	LCD_DATA_REG = ((character << 4) | (LCD_DATA_REG & 0x0F));
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,LOW);
	_delay_ms(5);
}

void LCD_WriteComm(uint8_t comm)
{
	DIO_SetPinVal(LCD_RS_PORT,LCD_RS_PIN,LOW);
	DIO_SetPinVal(LCD_RW_PORT,LCD_RW_PIN,LOW);

	LCD_DATA_REG = ((comm & 0xF0) | (LCD_DATA_REG & 0x0F));
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,LOW);
	_delay_ms(5);
	LCD_DATA_REG = ((comm << 4) | (LCD_DATA_REG & 0x0F));
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,LOW);
	_delay_ms(5);
}

void LCD_WriteStr (const uint8_t *p)
{
	sint8_t counter = 0;
	
	while(p[counter] != '\0' )
	{
		LCD_WriteChar(p[counter]);
		counter ++;
	}
}

void LCD_WriteNum(sint16_t NUM)
{
	if(NUM == 0)
	{
		LCD_WriteChar('0');
	}
	
	if(NUM < 0)
	{
		LCD_WriteChar('-');
		NUM = NUM * (-1);
	}
	if(NUM > 0)
	{
		uint8_t arr[10] = {0};
		sint8_t counter = 0;
		while(NUM != 0)
		{
			arr[counter] = NUM % 10;
			counter++;
			NUM = NUM / 10;
		}
		counter--;
		while(counter > -1)
		{
			LCD_WriteChar(arr[counter] + 48);
			counter--;
		}
	}
}

void LCD_CLR(void)
{
	LCD_WriteComm(0x01);   // Clear
	LCD_WriteComm(0x0C);   // Display ON, cursor OFF
	LCD_WriteComm(0x02);   // Return Home
	LCD_WriteComm(0x06);   // Write from left to right
}