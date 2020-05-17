/*********************************************/
/* Author : Mario Ramzy                      */
/* Date : 10/3/2018		                     */
/* version : V01		                     */

#include "STD_TYPES.h"

#include "BIT_MATH.h"

#include "DIO_reg.h"
#include "DIO_int.h"

#include "SEVSEG_int.h"


#include "LCD_int.h"

#include "TIM0_int.h"
#include "RTO_priv.h"
#include "RTO_config.h"

#include "RTO_int.h"

static u16 ov_counter ;
static u16 Current_tick;
/*
static u8 inc_number = 0;
static u8 dec_number = 9;
*/
typedef struct
{
	u8 Periodicity;
	void (*TaskHandler) (void);
	
}Task;


/***********************************************************************/
//dy el tasks ele ha3mlha fel rtos
//mafrod tt3amal fel application bs mo2akatan ha3melha hena
void binary_leds(void)	//toggle bit kol 100 ms
{
	static u8 j = 1;
	u8 Local_result = j;

		for(u8 i = 24; i<32; i++)
		{

			if((Local_result%2) == 1)
				DIO_voidSetPinValue(i, DIO_u8_HIGH);
			else
				DIO_voidSetPinValue(i, DIO_u8_LOW);

			Local_result /= 2;
		}
		j++;
	//TOGGLEBIT(PORTD,1);
	
}

void arabic_name(void)
{
	//LCD_voidInitialize();
	u8 t = 0;
	static u8 i = 0;

	//LCD_voidWriteCmd(0x01); //clear LCD


		LCD_voidGoToXY(i-1, 1);
		LCD_voidWriteData(' '); //to clear the past shape
		LCD_voidGoToXY(15, 1);
		LCD_voidWriteData(' '); //to clear the past shape

		LCD_voidGoToXY(i, 1);
		LCD_voidWriteData(0);
		t = i+1;
		if (t>15) t = 0;
		LCD_voidGoToXY(t, 1);
		LCD_voidWriteData(1);

		t++;
		if (t>15) t = 0;
		LCD_voidGoToXY(t, 1);
		LCD_voidWriteData(2);

		t++;
		if (t>15) t = 0;
		LCD_voidGoToXY(t, 1);
		LCD_voidWriteData(3);

		t++;
		if (t>15) t = 0;
		LCD_voidGoToXY(t, 1);
		LCD_voidWriteData(4);

		i++;
		if(i>15)
		{
			i = 0;
		}

}

void english_name(void)
{
	static u8 j =15;
	//LCD_voidWriteCmd(0x01); //clear LCD
	//if(j!=15)
	//{
	LCD_voidGoToXY(j+1, 0);
		LCD_voidWriteData(' '); //to clear the past shape

	LCD_voidGoToXY(0, 0);
	LCD_voidWriteData(' '); //to clear the past shape

	LCD_voidGoToXY(1, 0);
	LCD_voidWriteData(' '); //to clear the past shape
	//}

	u8 t = 0;
	LCD_voidGoToXY(j, 0);
	LCD_voidWriteData('O');
	t = j-1;
	if (t<0) t = 15;
	LCD_voidGoToXY(t, 0);
	LCD_voidWriteData('I');

	t--;
	if (t<0) t = 15;
	LCD_voidGoToXY(t, 0);
	LCD_voidWriteData('R');

	t--;
	if (t<0) t = 15;
	LCD_voidGoToXY(t, 0);
	LCD_voidWriteData('A');

	t--;
	if (t<0) t = 15;
	LCD_voidGoToXY(t, 0);
	LCD_voidWriteData('M');
	j--;
	if(j<1)
	{
		j = 15;
	}
}

void sev_seg1 (void)
{
	static u8 inc_number = 0;
	static u8 counter = 0;
	counter++;
	if(counter ==40)
	{
		counter = 0;
		inc_number++;
		if(inc_number == 10)
		{
			inc_number = 0;
		}
	}
	DIO_voidSetPinValue(DIO_u8_PIN_23, DIO_u8_LOW); //enable first sev seg
	DIO_voidSetPinValue(DIO_u8_PIN_7, DIO_u8_HIGH); //disable second sev seg
	void_7SegmentDisplay(inc_number);
}



void sev_seg2 (void)
{
	static s8 dec_number = 9;
	static u8 cntr = 0;
	cntr++;
	if(cntr ==30)
	{
		cntr = 9;
		dec_number--;
		if (dec_number < 0)
		{
			dec_number = 9;
		}
	}
	DIO_voidSetPinValue(DIO_u8_PIN_23, DIO_u8_HIGH); //disable  first sev seg
	DIO_voidSetPinValue(DIO_u8_PIN_7, DIO_u8_LOW); //enable second sev seg
	void_7SegmentDisplay(dec_number);
}
/*
void increase(void)
{

	inc_number++;
	if(inc_number >9)
		inc_number = 0;
}

void decrease(void)
{
	dec_number--;
	if(dec_number < 0)
		dec_number = 9;
}*/

/**********************************************************/
Task SysTasks [RTO_u8_TASKS_NUM] = 
{
	{1, sev_seg1},
	{2, sev_seg2},
	{25, binary_leds},
	{50, arabic_name},
	{30, english_name}
//	{40, increase},
	//{60, decrease}

};


void RTO_voidInitialize(void)
{
	ov_counter = 0;
	Current_tick = 0;
	TIM0_voidSetRegister(RTO_u8_TIM_INIT);
	TIM0_voidSetCallBack(Kernel);
}



static void Kernel(void)
{
	ov_counter++;
	if (ov_counter == RTO_u16_max_ov)
	{
		ov_counter = 0;
		TIM0_voidSetRegister(RTO_u8_TIM_INIT);
		Current_tick++;
		Scheduler();
	}
}


static void Scheduler(void)
{
	u8 i;

	for(i=0; i<RTO_u8_TASKS_NUM; i++)
	{
		// Check Task periodicity
		if( (Current_tick % SysTasks[i].Periodicity) == 0)
		{
			SysTasks[i].TaskHandler();
		}
	}
}
