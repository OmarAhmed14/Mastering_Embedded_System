/*
 ============================================================================
 Subject     : C Program to print all alphabets using a pointer
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char arr[26]; int i;

	for (i=0;i<26;i++)
	{
		arr[i]=i+65;
	}

	char *ptr = arr;

	printf ("The Alphabets are:\n");

	for (i=0;i<26;i++)
	{
		printf ("%c ",*ptr++);
	}
	return 0;
}
