/*
 ============================================================================
 Subject     : C Code to store information of student in structure
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sStudent{
	char name [20];
	int roll;
	float mark;
};
int main(void)
{
	struct sStudent x;

	printf("Enter information of student: ");

	printf ("\r\nEnter Name: ");
	fflush(stdin);fflush (stdout);
	scanf("%s",x.name);

	printf ("Enter Roll Number: ");
	fflush(stdin);fflush (stdout);
	scanf("%d",&x.roll);

	printf ("Enter Marks: ");
	fflush(stdin);fflush (stdout);
	scanf("%f",&x.mark);

	printf ("\nDisplaying information\n");

	printf ("Name: %s\n",x.name);
	printf("Roll: %d\n",x.roll);
	printf("Marks: %.1f\n",x.mark);

	return 0;
}
