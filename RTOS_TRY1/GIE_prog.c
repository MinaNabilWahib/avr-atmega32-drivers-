/*********************************************/
/* Author  : Hussein Elmasry		         */
/* Date    : 24/2/2018				         */
/* Version : V01						     */
/*********************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_reg.h"
#include "GIE_priv.h"
#include "GIE_config.h"
#include "GIE_int.h"
/*********************************************/
/* Description : Enable global interrupt   	*/
/********************************************/
void GIE_voidEnable(void)
{
	SETBIT(SREG,GIE_u8_BIT_INDEX);
}

/********************************************/
/* Description : Disable global interrupt   */
/********************************************/
void GIE_voidDisable(void)
{
	CLRBIT(SREG,GIE_u8_BIT_INDEX);	
}