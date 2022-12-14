
#define   F_CPU 16000000UL
#include "util/delay.h"

#include "LCD.h"
#include "Flex.h"

#include "DIO.h"
#include "ADC.h"

int main(void)
{
	LCD_Init();
	Flex_Init();
	ADC_Init();

	while(1)
	{
		if ( ((Flex_Read(Flex0Pin) <= 680) && (Flex_Read(Flex0Pin) >= 635)) && ((Flex_Read(Flex1Pin) <= 780) && (Flex_Read(Flex1Pin) >= 740)) && ((Flex_Read(Flex2Pin) <= 725) && (Flex_Read(Flex2Pin) >= 690)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 790) && (Flex_Read(Flex4Pin) >= 765)))
		{
			while( ((Flex_Read(Flex0Pin) <= 665) && (Flex_Read(Flex0Pin) >= 635)) && ((Flex_Read(Flex1Pin) <= 780) && (Flex_Read(Flex1Pin) >= 740)) && ((Flex_Read(Flex2Pin) <= 725) && (Flex_Read(Flex2Pin) >= 690)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 790) && (Flex_Read(Flex4Pin) >= 765)))
			{
				LCD_WriteStr("Al-Salam Alikom");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 695) && (Flex_Read(Flex0Pin) >= 655)) && ((Flex_Read(Flex1Pin) <= 735) && (Flex_Read(Flex1Pin) >= 700)) && ((Flex_Read(Flex2Pin) <= 690) && (Flex_Read(Flex2Pin) >= 660)) && ((Flex_Read(Flex3Pin) <= 730) && (Flex_Read(Flex3Pin) >= 695)) && ((Flex_Read(Flex4Pin) <= 750) && (Flex_Read(Flex4Pin) >= 715)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 695) && (Flex_Read(Flex0Pin) >= 655)) && ((Flex_Read(Flex1Pin) <= 735) && (Flex_Read(Flex1Pin) >= 700)) && ((Flex_Read(Flex2Pin) <= 690) && (Flex_Read(Flex2Pin) >= 660)) && ((Flex_Read(Flex3Pin) <= 730) && (Flex_Read(Flex3Pin) >= 695)) && ((Flex_Read(Flex4Pin) <= 750) && (Flex_Read(Flex4Pin) >= 715)))
			{
				LCD_WriteStr("Eng.Eslam");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 680) && (Flex_Read(Flex0Pin) >= 640)) && ((Flex_Read(Flex1Pin) <= 690) && (Flex_Read(Flex1Pin) >= 660)) && ((Flex_Read(Flex2Pin) <= 705) && (Flex_Read(Flex2Pin) >= 660)) && ((Flex_Read(Flex3Pin) <= 725) && (Flex_Read(Flex3Pin) >= 700)) && ((Flex_Read(Flex4Pin) <= 760) && (Flex_Read(Flex4Pin) >= 730)))
		{
			while( ((Flex_Read(Flex0Pin) <= 680) && (Flex_Read(Flex0Pin) >= 635)) && ((Flex_Read(Flex1Pin) <= 690) && (Flex_Read(Flex1Pin) >= 660)) && ((Flex_Read(Flex2Pin) <= 705) && (Flex_Read(Flex2Pin) >= 660)) && ((Flex_Read(Flex3Pin) <= 725) && (Flex_Read(Flex3Pin) >= 690)) && ((Flex_Read(Flex4Pin) <= 760) && (Flex_Read(Flex4Pin) >= 725)))
			{
				LCD_WriteStr("We are the");
				LCD_WriteComm(0xC0);
				LCD_WriteStr("Deaf-Glove team");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 770) && (Flex_Read(Flex0Pin) >= 725)) && ((Flex_Read(Flex1Pin) <= 770) && (Flex_Read(Flex1Pin) >= 740)) && ((Flex_Read(Flex2Pin) <= 730) && (Flex_Read(Flex2Pin) >= 700)) && ((Flex_Read(Flex3Pin) <= 760) && (Flex_Read(Flex3Pin) >= 720)) && ((Flex_Read(Flex4Pin) <= 795) && (Flex_Read(Flex4Pin) >= 760)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 770) && (Flex_Read(Flex0Pin) >= 725)) && ((Flex_Read(Flex1Pin) <= 770) && (Flex_Read(Flex1Pin) >= 740)) && ((Flex_Read(Flex2Pin) <= 730) && (Flex_Read(Flex2Pin) >= 700)) && ((Flex_Read(Flex3Pin) <= 760) && (Flex_Read(Flex3Pin) >= 720)) && ((Flex_Read(Flex4Pin) <= 795) && (Flex_Read(Flex4Pin) >= 760)))
			{
				LCD_WriteStr("Moaaz Nasser");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 670) && (Flex_Read(Flex0Pin) >= 635)) && ((Flex_Read(Flex1Pin) <= 755) && (Flex_Read(Flex1Pin) >= 720)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 650) && (Flex_Read(Flex3Pin) >= 620)) && ((Flex_Read(Flex4Pin) <= 700) && (Flex_Read(Flex4Pin) >= 670)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 670) && (Flex_Read(Flex0Pin) >= 635)) && ((Flex_Read(Flex1Pin) <= 755) && (Flex_Read(Flex1Pin) >= 720)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 650) && (Flex_Read(Flex3Pin) >= 620)) && ((Flex_Read(Flex4Pin) <= 700) && (Flex_Read(Flex4Pin) >= 670)))
			{
				LCD_WriteStr("Amr Ali");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 730) && (Flex_Read(Flex0Pin) >= 700)) && ((Flex_Read(Flex1Pin) <= 680) && (Flex_Read(Flex1Pin) >= 655)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 650) && (Flex_Read(Flex3Pin) >= 620)) && ((Flex_Read(Flex4Pin) <= 700) && (Flex_Read(Flex4Pin) >= 670)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 730) && (Flex_Read(Flex0Pin) >= 700)) && ((Flex_Read(Flex1Pin) <= 680) && (Flex_Read(Flex1Pin) >= 655)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 650) && (Flex_Read(Flex3Pin) >= 620)) && ((Flex_Read(Flex4Pin) <= 700) && (Flex_Read(Flex4Pin) >= 670)))
			{
				LCD_WriteStr("Mohamed Gamal");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 710) && (Flex_Read(Flex0Pin) >= 660)) && ((Flex_Read(Flex1Pin) <= 680) && (Flex_Read(Flex1Pin) >= 655)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 780) && (Flex_Read(Flex4Pin) >= 745)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 710) && (Flex_Read(Flex0Pin) >= 660)) && ((Flex_Read(Flex1Pin) <= 680) && (Flex_Read(Flex1Pin) >= 655)) && ((Flex_Read(Flex2Pin) <= 650) && (Flex_Read(Flex2Pin) >= 620)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 780) && (Flex_Read(Flex4Pin) >= 745)))
			{
				LCD_WriteStr("Ahmed Tamer");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
		
		else if ( ((Flex_Read(Flex0Pin) <= 660) && (Flex_Read(Flex0Pin) >= 630)) && ((Flex_Read(Flex1Pin) <= 675) && (Flex_Read(Flex1Pin) >= 650)) && ((Flex_Read(Flex2Pin) <= 715) && (Flex_Read(Flex2Pin) >= 690)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 790) && (Flex_Read(Flex4Pin) >= 750)))
		{
			while ( ((Flex_Read(Flex0Pin) <= 670) && (Flex_Read(Flex0Pin) >= 630)) && ((Flex_Read(Flex1Pin) <= 680) && (Flex_Read(Flex1Pin) >= 630)) && ((Flex_Read(Flex2Pin) <= 730) && (Flex_Read(Flex2Pin) >= 700)) && ((Flex_Read(Flex3Pin) <= 740) && (Flex_Read(Flex3Pin) >= 710)) && ((Flex_Read(Flex4Pin) <= 790) && (Flex_Read(Flex4Pin) >= 750)))
			{
				LCD_WriteStr("AMIT-Enjoy :)");
				LCD_WriteComm(0x02);
			}
			LCD_CLR();
		}
	}
}