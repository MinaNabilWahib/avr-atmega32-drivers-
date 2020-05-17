/*
 * main.c
 *
 *  Created on: Sep 27, 2019
 *      Author: minanabil
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include "TIM0_int.h"
#include "GIE_int.h"
#include "RTOS_int.h"
#include "avr/delay.h"

extern u8 flag;
#define RTO_u8_TIM_INIT		144


void createTask(task_t * T,u8 priority);
void LED_oneToggle(void){
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
}

task_t task1={
	30,LED_oneToggle
};
task_t task2={
	42,LED_twoToggle
};
task_t task3={
	50,LED_threeToggle
};
task_t task4={
	72,LED_fourToggle
};




int main(void)
{
	DIO_voidInitialize();
	GIE_voidEnable();

	LED_voidInitialize();
	TIM0_voidSetRegister(RTO_u8_TIM_INIT);
	TIM0_voidInitialize();
	TIM0_voidEnableInt();
	createTask(task1,0);
	createTask(task2,1);
	createTask(task3,2);
	createTask(task4,3);

	RTOS_initialize();


	while(1)
	{
		if(flag==1)
		{
			scheduler();
			flag=0;
		}

	}

	return 0;
}

void createTask(task_t * T,u8 priority){
	tasks[priority]=T;
}


