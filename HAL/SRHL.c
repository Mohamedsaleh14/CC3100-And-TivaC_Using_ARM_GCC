/*
 * Copyright (c) 2016, Mohamed Saleh
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Mohamed Saleh nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY Mohamed Saleh ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Mohamed Saleh BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * File:			SRHL.c
 * Author:		Mohamed Saleh (mohamedsaleh.elec@gmail.com).
 * Version:		1.0.0.
 * Description:	Sender/Receiver Handler.
 */

#include "../common.h"
#include "SRHL.h"

Fd_t SRHL_IfOpen(char* pIfName , unsigned long flags)
{
	/*
	 * Initialize PE4 (nHIB) as GPIO, LOW
	 * Initialize PE0 (CS) as GPIO HIGH
	 */


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


int SRHL_IfClose(Fd_t Fd)
{
	/*
	 * Disable WLAN interrupt
	 *
	 * CC3100_InterruptDisable();
	 */

	//return
}

int SRHL_IfRead(Fd_t Fd , char* pBuff , int Len)
{

}

int SRHL_IfWrite(Fd_t Fd , char* pBuff , int Len)
{

}



