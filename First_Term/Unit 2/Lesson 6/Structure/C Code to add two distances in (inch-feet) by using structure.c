/*
 ============================================================================
 Subject     : C Code to add two distances in (inch-feet) by using structure
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sdistance{
	int feet;
	float inch;
};

int main(void)
{
	struct sdistance d1,d2,sum;

	printf("Enter Information for 1st distance:\n");

	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);

	printf("Enter Inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	printf("\nEnter Information for 2nd distance:\n");

	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);

	printf("Enter Inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	while (sum.inch>=12)
	{
		sum.inch -= 12;
		sum.feet++;
	}

	printf ("\nSum of distances= %d'-%.1f\"",sum.feet,sum.inch);

	return 0;
}
