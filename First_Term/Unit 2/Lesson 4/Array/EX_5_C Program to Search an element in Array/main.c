/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */


// Search an element in Array

#include "stdio.h"

int main()
{
	int arr[100];
	int num,i,searched_num;

	printf ("Enter number of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	for (i=0;i<num;i++)
	{
		arr[i]=(i+1)*11;
		printf ("%d  ",arr[i]);
	}

	printf ("\nEnter number of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&searched_num);

	for (i=0;i<num;i++)
	{
		if (arr[i]==searched_num)
		{
			printf("number found at location %d",i+1);
		}
	}

}
