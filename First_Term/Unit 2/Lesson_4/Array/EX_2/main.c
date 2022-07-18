/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */

// Average numbers in Array


#include "stdio.h"

int main()
{
	float arr [100];
	int size,i;
	float average,sum=0;
	printf ("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter number %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];average=sum/size;
	}
	printf ("Average= %.2f",average);


}


