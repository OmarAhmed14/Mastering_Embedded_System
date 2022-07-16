/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX2
// check if character vowel or not


#include "stdio.h"

int main ()
{
	char x;
	printf ("Enter an alphabet: ");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&x);
	if (x=='a' || x=='i' || x=='e' || x=='u' || x=='o' ||x=='A' || x=='I' || x=='E' || x=='U' || x=='O')
	{
		printf ("%c is a vowel",x);
	}
	else
		printf ("%c is a consonant",x);
	return 0;
}
