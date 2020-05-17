#ifndef _SPI_REG_H
#define _SPI_REG_H


#define SPDR	*((volatile u8*) 0x2F)
#define SPSR	*((volatile u8*) 0x2E)
#define SPCR	*((volatile u8*) 0x2D)

#endif
