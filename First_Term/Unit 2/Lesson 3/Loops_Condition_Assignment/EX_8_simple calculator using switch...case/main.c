/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Omar Ahmed
 */

//EX8
//simple calculator using switch...case


#include "stdio.h"

int main ()
{
	char operator;
	float a,b;
	printf ("Enter operator either + or - or / or * : ");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&operator);
	printf ("Enter two operands : ");
	fflush (stdin); fflush (stdout);
	scanf ("%f %f",&a,&b);
	switch (operator)
	{
	case '+' :
	{
		printf ("%.1f %c %.1f = %.1f",a,'+',b,a+b);
	}
	break;
	case '-' :
	{
		printf ("%.1f %c %.1f = %.1f",a,'-',b,a-b);
	}
	break;
	case '/' :
	{
		printf ("%.1f %c %.1f = %.1f",a,'/',b,a/b);
	}
	break;
	case '*':
	{
		printf ("%.1f %c %.1f = %.1f",a,'*',b,a*b);
	}
	break;
	}
	return 0;
}


