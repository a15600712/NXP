/*
 * AvnetTypedef.h
 *
 *  Created on: Nov 5, 2012
 *      Author: 914428
 */

#ifndef AVNETTYPEDEF_H_
#define AVNETTYPEDEF_H_

typedef char* PCHAR;
typedef char BOOL;
typedef char CHAR;
typedef unsigned char UCHAR;
typedef unsigned int UINT;


#define TRUE	1
#define FALSE	0

#define printf PRINTF

#define DEMO_LPUART            LPUART1
#define DEMO_LPUART_CLK_FREQ   BOARD_DebugConsoleSrcFreq()
#define DEMO_LPUART_IRQn       LPUART1_IRQn
#define DEMO_LPUART_IRQHandler LPUART1_IRQHandler

#define DEMO_RING_BUFFER_SIZE 16

#endif /* AVNETTYPEDEF_H_ */
