/*
 ============================================================================
 Subject     : C Function to check user Name
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare (char a[]);

int main(void)
{
	char Name [100];
	printf ("Enter User Name: ");
	fflush (stdin); fflush (stdout);
	 //gets(Name);
	 scanf("%s",Name);




	compare (Name);
	return 0;
}

void compare (char a[])
{
  if (stricmp(a,"Omar_Ahmed"))
  {
	  printf ("Different");
  }
  else
	  printf ("Identical");

}
