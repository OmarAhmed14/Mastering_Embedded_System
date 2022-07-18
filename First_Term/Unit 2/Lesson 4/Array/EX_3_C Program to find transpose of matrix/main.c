/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Omar Ahmed
 */


//find transpose of matrix

#include "stdio.h"

int main()
{
	int arr [50][50];
	int trans [50][50];
	int rows,col,i,j;
	printf("Enter Number of rows and coloms of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&rows,&col);
	printf ("Enter elements of matrix:\n");
	for (i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf ("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	printf ("Entered matrix:\n");
	for (i=0;i<rows;i++)
		{
			for(j=0;j<col;j++)
			{

				printf ("%d\t",arr[i][j]);

			}
			printf ("\n");
		}

	printf ("Transpose matrix:\n");

	for (i=0;i<col;i++)
			{
				for(j=0;j<rows;j++)
				{

					trans [i][j]=arr[j][i];

				}

			}

	for (i=0;i<col;i++)
			{
				for(j=0;j<rows;j++)
				{

					printf ("%d\t",trans[i][j]);

				}
				printf ("\n");
			}


}
