
#include "ADC.h"

void ADC_Init()
{	
	#if VOLTAGE_REFERENCE == AREF
	CLR_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);
	#elif  VOLTAGE_REFERENCE == AVCC
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);
	#elif  VOLTAGE_REFERENCE == Internal_2_56V
	SET_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);
	#endif

	/*Right ADJUST*/
	CLR_BIT(ADMUX, ADLAR);
	
	/*128 Pre-scaler*/
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);
	                        
	/*ADC peripheral Enable*/
	SET_BIT(ADCSRA,ADEN);
	/*ADC peripheral interrupt Enable*/
	SET_BIT(ADCSRA,ADIE);
}


uint16t ADC_Read(uint8_t ADC_CHANNEL)
{
	//Channel select
	CLR_BIT(ADC_PORT,ADC_CHANNEL);
	
	ADMUX = ADC_CHANNEL | (ADMUX & 0xE0);
	//Start of conversion
	SET_BIT(ADCSRA, ADSC);
	//End of conversion Polling
	while(IS_LO(ADCSRA, ADIF));
	//Converted digital output
	return ADC_REG;
}