/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX4
//Write C Program to Multiply two Floating Point Numbers
//i should see the Console as following:
//##########Console-output###
//###########################
//Enter two numbers: 2.4
//1.1
//Product: 2.640000
//########################################################################

#include "stdio.h"

int main()
{
	float a,b;
	printf ("Enter two numbers: ");
	fflush (stdin); fflush (stdout);
	scanf ("%f %f",&a,&b);
	printf ("Product: %f",a*b);
	return 0;
}
