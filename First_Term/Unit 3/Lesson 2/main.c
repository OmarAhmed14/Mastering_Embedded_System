#include "UART.h"

char string_buffer [100] = "Learn in depth:<Omar>";
const char string_buffer2 [100] = "Learn in depth:<Omar>";


int main ()
{
	UART_string (string_buffer);
	return 0;
}
