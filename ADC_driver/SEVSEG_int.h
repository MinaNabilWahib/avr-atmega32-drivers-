/*
 * SEVSEG_int.h
 *
 *  Created on: Aug 23, 2019
 *      Author: minanabil
 */

#ifndef SEVSEG_INT_H_
#define SEVSEG_INT_H_

void SEVSEG_voidInitialize(void);
void SEVSEG_voidDisplay(u8 SegNum ,u8 Num);
void SEVSEG_voidEnable(u8 SegNum);
void SEVSEG_voidDisable(u8 SegNum);

#define SEG_1 1
#define SEG_2 2


#endif /* SEVSEG_INT_H_ */
