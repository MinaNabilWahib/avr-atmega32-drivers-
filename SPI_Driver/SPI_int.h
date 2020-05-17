#ifndef _SPI_INT_H
#define _SPI_INT_H

#include "STD_TYPES.h"

void SPI_MASTER_void_init(void);
void SPI_SLAVE_void_init(void);
void SPI_MASTER_void_transmit(u8 Data);
u8 SPI_SLAVE_void_receive(void);

#endif
