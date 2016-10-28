/*
 * SPID.c
 *
 *  Created on: Oct 23, 2016
 *      Author: saleh
 */
#include "SPID.h"
#include "../cmsis/LM4F120H5QR.h"
#include "../common.h"
#define PORTE_CLOCK_ENABLE_BIT		(0x10)

#define PE0							(0x01)
#define PE4							(0x10)

Fd_t SPID_IfOpen(char* pIfName , unsigned long flags)
{
	/*
	 * Initialize PE4 (nHIB) as GPIO, LOW
	 * Initialize PE0 (CS) as GPIO HIGH
	 */
	SYSCTL->RCGCGPIO |= PORTE_CLOCK_ENABLE_BIT;
	GPIOE->DIR |= (PE0|PE4);
	GPIOE->DEN |= (PE0|PE4);
	GPIOE->DATA |= (PE0);
	GPIOE->DATA &= ~(PE4);

	/*
	 * Enable pull up on PB1, CC3100 UART Rx --> 4ma, type std wpu
	 *
	 * Configure SSI2
	 * 		PB4 ---> CLK
	 * 		PB5 ---> FSS
	 * 		PB6 ---> Rx
	 * 		PB7 ---> Tx
	 */

	/*
	 * Clock is configured at 12 MHz
	 * FRF MOTO MODE 0
	 * MODE MASTER
	 * 8
	 *
	 * ENABLE SSI2
	 */

	/*
	 * Configure HOST IRQ line
	 *
	 * GPIO PB2 as input
	 * Pad Configuration ---> 2ms, rising edge,Type STD WPU
	 *
	 * Interrupt type rising edge
	 * GPIO interrupt clear then disable
	 * enable interrupt for portB inside the processor vtable
	 * Processor interrupt enable
	 */

	/*
	 * Delay 1ms
	 */

	/*
	 * Enable WLAN interrupt
	 *
	 *
	 * CC3100_InterruptEnable();
	 */

	//return
}

int SPID_IfClose(Fd_t Fd)
{
	/*
	 * Disable WLAN interrupt
	 *
	 * CC3100_InterruptDisable();
	 */

	//return
}

int SPID_IfRead(Fd_t Fd , char* pBuff , int Len)
{

}

int SPID_IfWrite(Fd_t Fd , char* pBuff , int Len)
{

}

