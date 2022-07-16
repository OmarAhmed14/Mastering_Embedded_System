/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX2:
//Write C Program to Print a Integer Entered by a User
//i should see the Console as following:
//##########Console-output###
//Enter a integer: 25
//You entered: 25
//###########################

#include "stdio.h"

int main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdin); fflush (stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);
	return 0;
}

