/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: Omar Ahmed
 */


// C Program to calculate factorial using recursion



#include "stdio.h"

int fact (int x);

int main ()
{
	int num;
	printf ("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf ("factorial of %d = %d",num,fact (num));

	return 0;
}


int fact (int x)
{
	int factorial =1;
	int i;
	if (x!=0)
	{
		for (i=1;i<=x;i++)
			factorial= i*fact(i-1);
	}

	return factorial;

}
