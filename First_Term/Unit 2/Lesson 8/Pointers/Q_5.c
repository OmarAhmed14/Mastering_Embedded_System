/*
 ============================================================================
 Subject     : C Code To print members of structure using pointers
 Author      : Omar Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct e {
	char Name[10];
	int ID;
};
int main(void)
{
	struct e employee={"Alex",1002}; struct e* ptr=&employee;

	printf ("Employee Name: %s\n",ptr->Name);
	printf ("Employee ID: %d\n",ptr->ID);



	return 0;
}
