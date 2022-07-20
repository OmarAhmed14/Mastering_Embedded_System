/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar Ahmed
 */


// C Program to calculate power of a number using recursion


#include "stdio.h"

int power (int b, int p);

int main ()
{
	int base,pow;
	printf ("Enter base number: ");
	scanf ("%d",&base);

	printf ("Enter power number (positive number): ");
	scanf ("%d",&pow);

	printf ("%d %c %d = %d",base,'^',pow,power(base,pow));


	return 0;
}

int power (int b, int p)
{
	if (p==0)
		return 1;
	else
	{
		return b*power(b,p-1);
	}

}
