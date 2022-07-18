/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */


// find frequency of characters in a string


#include "stdio.h"

int main ()
{
	char text[100];
	char x;int i=0;int freq=0;

	printf ("Enter a string: ");
	fflush (stdin);fflush (stdout);
	gets(text);

	printf ("Enter a character to find frequency: ");
	fflush (stdin);fflush (stdout);
	scanf("%c",&x);

	while (text [i]!=0)
	{
		if (text [i]==x)
			freq++;
		i++;

	}
	printf ("frequency of %c = %d",x,freq);

}

