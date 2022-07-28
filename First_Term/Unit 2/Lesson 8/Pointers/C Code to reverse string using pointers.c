/*
 ============================================================================
 Subject     : C Code to reverse string using pointers
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char arr[20]; char* ptr;int i;

	printf ("Enter a string: ");
	fflush (stdin); fflush (stdout);
	gets(arr);


	ptr =&arr[strlen(arr)-1];

	printf ("Reverse of the string is: ");

	for (i=0;i<strlen(arr);i++)
	{
		printf ("%c",*ptr--);
	}

	return 0;
}
