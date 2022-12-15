

#ifndef LCD_CFG_H_
#define LCD_CFG_H_

#define LCD_DATA_REG    PORTB      // Port B is used for LCD instead of Port A to allow using the ADC channels in Port A   

#define LCD4_DATA_PORT  DIO_PORTB
#define LCD4_DATA_PIN   Pin4

#define LCD5_DATA_PORT  DIO_PORTB
#define LCD5_DATA_PIN   Pin5

#define LCD6_DATA_PORT  DIO_PORTB
#define LCD6_DATA_PIN   Pin6

#define LCD7_DATA_PORT  DIO_PORTB
#define LCD7_DATA_PIN   Pin7


#define LCD_EN_PORT     DIO_PORTB
#define LCD_EN_PIN      Pin3

#define LCD_RW_PORT     DIO_PORTB
#define LCD_RW_PIN      Pin2

#define LCD_RS_PORT     DIO_PORTB
#define LCD_RS_PIN      Pin1

#endif /* LCD_CFG_H_ */