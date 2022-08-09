#include "UART.h"


#define UART0DR *((volatile unsigned int *) ((unsigned int *) 0x101f1000))


void UART_string (unsigned char* p)
{
	while (*p != 0)
	{
		UART0DR = (unsigned int) *p;
		p++;
	}
}