/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Omar Ahmed
 */

//EX5:
//Write C Program to Find ASCII Value of a Character
//#########Console_output######
//Enter a character: G
//ASCII value of G = 71
//#############################

#include "stdio.h"

int main ()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush (stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
	return 0;
}
