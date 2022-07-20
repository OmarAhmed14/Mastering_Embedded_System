/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar Ahmed
 */


// C Program to reverse sentence using recursion



#include "stdio.h"

void reverse (void);

int main ()
{

	printf("Enter a sentence: ");
	reverse();

	return 0;
}

void reverse (void)
{
	char c;
	scanf ("%c",&c);

	if (c != '\n')
	{
		reverse();
		printf ("%c",c);
	}
}
