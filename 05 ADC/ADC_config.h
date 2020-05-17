/*****************************
Author : Mario Ramzy
Date : 13/4/2018
Version: V01
*******************/


#ifndef _ADC_CONF_H
#define _ADC_CONF_H


/* Options:
-EIGHT_BIT
-TEN_BIT
**************************/
#define  RESOLUTION   EIGHT_BIT


/* Options:
- INTERNAL_VCC
- EXTERNAL_AVCC
- INTERNAL_2.56V
***************************/
#define REF_VOLTAGE	EXTERNAL_AVCC



/* Options:
SINGLE_CONVERSION_MODE
FREE_RUNNING_MODE				
TRIGGER_WITH_ANALOG_COMPARATOR	
TRIGGER_WITH_EXTI0				
TRIGGER_WITH_TIM0_COMP			
TRIGGER_WITH_TIM0_OV			
TRIGGER_WITH_TIM_COM_B			
TRIGGER_WITH_TIM1_OV			
TRIGGER_WITH_TIM_CAPTURE
***********************/
#define MODE 		SINGLE_CONVERSION_MODE








/* Options:
PRESCALER_2	
PRESCALER_4	
PRESCALER_8	
PRESCALER_16
PRESCALER_32
PRESCALER_64
PRESCALER_128
*************************/
#define PRESCALER		PRESCALER_2




#endif	
