/*
 * RTOS_int.h
 *
 *  Created on: Sep 27, 2019
 *      Author: minanabil
 */

#ifndef RTOS_INT_H_
#define RTOS_INT_H_

void RTOS_initialize(void);

void scheduler(void);
typedef struct
{
	u8 periodicity;
	void (*pf) (void);

}task_t;


#endif /* RTOS_INT_H_ */
