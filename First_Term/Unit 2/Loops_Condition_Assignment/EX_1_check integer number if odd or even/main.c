/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX1
// check integer number if odd or even


#include "stdio.h"

int main()
{
	int num;
	printf ("Enter an integer want to check: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&num);
	if (num % 2 ==0)
	{
		printf ("%d is even",num);
	}
	else
	{
		printf ("%d is odd",num);
	}
	return 0;
}

