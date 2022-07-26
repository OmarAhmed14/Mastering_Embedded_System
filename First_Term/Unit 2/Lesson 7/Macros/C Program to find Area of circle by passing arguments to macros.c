/*
 ============================================================================
 Name        : C Program to find Area of circle by passing arguments to macros
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define Area(r) pi*r*r

int main(void)
{
	int R;
	printf ("Enter the radius: ");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&R);

	printf ("Area of circle = %.2f",Area(R));

	return 0;
}
