/*
 ============================================================================
 Subject     : Example for handle pointers
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m=29 ;

	printf ("address of m: 0x%p\n",&m);
	printf ("value of m: %d\r\n",m);

	int* ab=&m;

	printf ("Now ab assigned with address of m\n");

	printf ("address of pointer ab: 0x%p\n",ab);
	printf ("content of pointer ab: %d\r\n",*ab);

	m=34;

	printf ("the value m assigned to 34 now\n");

	printf ("address of pointer ab: 0x%p\n",ab);
	printf ("content of pointer ab: %d\r\n",*ab);

	*ab=7;

	printf ("the pointer variable ab is assigned with the value 7 now\n");

	printf ("address of m: 0x%p\n",&m);
	printf ("value of m: %d\r\n",m);




	return 0;
}
