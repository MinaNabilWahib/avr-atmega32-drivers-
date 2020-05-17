/*
 * RTOS_prog.c
 *
 *  Created on: Sep 27, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RTOS_priv.h"
#include "RTOS_config.h"
#include "RTOS_int.h"

#include "LED_int.h"

#include "TIM0_int.h"


/*void LED_oneToggle(void){
	LED_voidToggle(LED_0);
}
void LED_twoToggle(void){
	LED_voidToggle(LED_1);
}
void LED_threeToggle(void){
	LED_voidToggle(LED_2);
}
void LED_fourToggle(void){
	LED_voidToggle(LED_3);
}*/


u32 tickcount=0;
u8 counter=0;
u8 flag=0;
void kernel(void);

task_t * tasks[NumOfTasks];/*={
		{30,LED_oneToggle},
		{42,LED_twoToggle},
		{50,LED_threeToggle},
		{72,LED_fourToggle}


};*/


void RTOS_initialize(void){
	TIM0_voidSetRegister(RTO_u16_max_ov);
	TIM0_voidSetCallBack(kernel);

}

void kernel(void){
	counter++;
	if(counter==NumOfOverflows)
	{
		flag=1;
		counter = 0;
		tickcount++;

	}
}
void scheduler(void)
{
	for(u8 i =0 ; i<NumOfTasks;i++)
	{
		if(tickcount%tasks[i]->periodicity==0)
		{
			tasks[i]->pf();
		}

	}

}





