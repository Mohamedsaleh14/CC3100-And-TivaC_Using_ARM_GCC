/*
 * SPID.h
 *
 *  Created on: Oct 23, 2016
 *      Author: saleh
 */

#ifndef HAL_SPID_H_
#define HAL_SPID_H_

typedef short* Fd_t;

extern Fd_t SPID_IfOpen(char* pIfName , unsigned long flags);

extern int SPID_IfClose(Fd_t Fd);

extern int SPID_IfRead(Fd_t Fd , char* pBuff , int Len);

extern int SPID_IfWrite(Fd_t Fd , char* pBuff , int Len);

#endif /* HAL_SPID_H_ */
