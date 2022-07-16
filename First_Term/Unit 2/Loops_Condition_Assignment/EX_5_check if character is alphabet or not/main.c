/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//Ex5
//check if character is alphabet or not


#include "stdio.h"

int main ()
{
	char n;
	printf ("Enter a character: ");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&n);
	if ((n>='a' && n<='z') || (n>='A' && n<='Z'))
		printf("%c is an alphabet",n);
	else
		printf("%c is not an alphabet",n);
	return 0;
}
