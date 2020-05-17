/****************************************/
/* Author  : Hussein Elmasry		    */
/* Date    : 24/2/2018					*/
/* Version : V01						*/
/****************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "avr/io.h"

#include "EXTI_reg.h"
#include "EXTI_priv.h"
#include "EXTI_config.h"
#include "EXTI_int.h"

/********************************************/
/* Description : Define callback variable   */
/********************************************/
static void(*EXTI_u8Int0Callback)(void);

/********************************************/
/* Description : Initialize EXTI mode   	*/
/********************************************/
void EXTI_voidInitialize(void)
{
/* Set EXTI mode as configured            	*/
	MCUCR = (MCUCR & EXTI_u8_INT0_MODE_CLEAR ) | EXTI_u8_INT0_MODE;
	
/* Initialize the state                 	*/	
#if EXTI_u8_INT0_INIT_STATE == EXTI_u8_ENABLE_STATE	
     SETBIT(GICR,EXTI_u8_INT0_PIE);
#else
     CLRBIT(GICR,EXTI_u8_INT0_PIE);
#endif

/* Clear flag                           	*/	 
     SETBIT(GIFR,EXTI_u8_INT0_PIF);	
}

/********************************************/
/* Description : enable EXTI 0 ISR   	    */
/********************************************/
void EXTI_voidEnableInt0(void)
{
     SETBIT(GICR,EXTI_u8_INT0_PIE);	
}

/********************************************/
/* Description : disable EXTI 0 ISR   	    */
/********************************************/
void EXTI_voidDisableInt0(void)
{
     CLRBIT(GICR,EXTI_u8_INT0_PIE);	
}

/********************************************/
/* Description : set call back function     */
/********************************************/
void EXTI_voidSetInt0Callback(void (*copy_Callback) (void))
{
	EXTI_u8Int0Callback	= copy_Callback;
}

void __vector_1(void) __attribute__((signal,used));
void __vector_1(void)
{
	EXTI_u8Int0Callback();
}
