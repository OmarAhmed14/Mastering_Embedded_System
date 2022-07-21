/*
 ============================================================================
 Subject     : C Code for swapping two array
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr1[150] , arr2[50],i,size1,size2,arr3[50];

	printf ("Enter size array 1: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&size1);

	printf("Enter array 1: ");
	fflush (stdin); fflush (stdout);
	for (i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf ("Enter size array 2: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&size2);

	printf("Enter array 2: ");
	fflush (stdin); fflush (stdout);
	for (i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}


	if (size1>=size2)
	{
		for (i=0;i<size1;i++)
		{
			arr3[i]=arr2[i];
			arr2[i]=arr1[i];
			arr1[i]=arr3[i];
		}
	}
		else
		{
			for (i=0;i<size2;i++)
			{
				arr3[i]=arr1[i];
				arr1[i]=arr2[i];
				arr2[i]=arr3[i];
			}
		}
	printf ("Array 1 after swapping: ");

	for (i=0;i<size2;i++)
		{
			printf("%d  ",arr1[i]);
		}
	printf ("\nArray 2 after swapping: ");

	for (i=0;i<size1;i++)
		{
			printf("%d  ",arr2[i]);
		}



	return 0;
}
