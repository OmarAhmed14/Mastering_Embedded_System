/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */

// sum of two matrix of 2 x 2


#include "stdio.h"

int main()
{
	float arr1 [2][2];
	float arr2 [2][2];
	float sum [2][2];
	int i,j;
	printf ("Enter the elements of 1st matrix \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++){
			printf ("enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf ("\n%f",&arr1[i][j]);}
	}
	printf ("Enter the elements of 2nd matrix \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++){
			printf ("enter a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf ("\n%f",&arr2[i][j]);}
	}
	printf ("sum of matrix: \n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=arr1[i][j]+= + arr2[i][j];
			printf("%.1f\t",sum[i][j]);
		}
		printf("\n");
	}

}
