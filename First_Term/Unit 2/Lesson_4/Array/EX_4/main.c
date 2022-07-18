/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */

// Insert element in an Array


#include "stdio.h"

int main()
{
	int arr[100];
	int num,i,loc,element,j;

	printf ("Enter number of Elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for (i=0;i<num;i++)
	{
		arr[i]=i+1;
		printf ("%d  ",arr[i]);
	}

	printf ("\nEnter element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	printf ("Enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);


	for (j=num;j>=0;j--)
	{
		arr[j]=arr[j-1];
		if (loc==j+1){
			arr[j]=element;
			break;}
	}
	for (i=0;i<=num;i++)
	{
		printf ("%d  ",arr[i]);
	}
}


