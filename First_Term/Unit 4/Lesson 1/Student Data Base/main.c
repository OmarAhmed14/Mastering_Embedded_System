/*
 * main.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Omar Ahmed
 */


#include "Data_Base_Students.h"


int main (void)
{
	int Choice;

	while (1)
	{
		Dprintf ("\nChoose one of the following option\n");
		Dprintf ("\n1: Add Student\n");
		Dprintf ("2: Delete Student\n");
		Dprintf ("3: View Students\n");
		Dprintf ("4: Delete All \n");
		Dprintf ("5: Find Specific Student by his index \n");
		Dprintf ("6: Find Number of Students in List\n");
		Dprintf ("7: Find Specific Student by his index from End\n");
		Dprintf ("8: Find Middle Student\n");
		Dprintf ("9: Reverse List\n");



		Dprintf ("Enter Option Number: ");
		scanf ("%d",&Choice);

		switch (Choice)
		{
		case 1:
			Add_Student();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			View_Students();
			break;
		case 4:
			Delete_AllStudents();
			break;
		case 5:
			Find_Node();
			break;
		case 6:
			Numbers_Students();
			break;
		case 7:
			Find_Node_End();
			break;
		case 8:
			Find_Middle();
			break;
		case 9:
			Reverse_List();
			break;
		default:
			Dprintf ("Wrong Choice");
			break;
		}
	}

	return 0;
}
