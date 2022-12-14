
#ifndef ADC_H_
#define ADC_H_

#include "DIO.h"
#include "ADC_private.h"
#include "ADC_Cfg.h"

void    ADC_Init(void);
uint16t ADC_Read(uint8_t ADC_CHANNEL);

#endif /* ADC_H_ */