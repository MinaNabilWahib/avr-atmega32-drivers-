/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 24/2/2018		                     */
/* version : V01		                     */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GIE_reg.h"
#include "GIE_int.h"
#include "GIE_priv.h"
#include "GIE_config.h"

/* Enable globale interrupt  */
GIE_voidEnable(void)
{
	SETBIT(SREG, GIE_u8_BIT_INDIX);
}

GIE_voidDisable(void)
{
	CLRBIT(SREG, GIE_u8_BIT_INDIX);
}




