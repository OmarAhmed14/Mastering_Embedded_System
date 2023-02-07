/*
 * main.c
 *
 *  Created on: Feb 4, 2023
 *      Eng: Omar Ahmed
 */

#include <stdio.h>
#include <stdlib.h>

#include "SIMS.h"

int main ()
{
	int choice;
	Dprintf("---Welcome to Student Management System---\n");
	while (1)
	{
		Dprintf("---Choose the Task that you want to perform---\n");
		Dprintf("1- Add Student Details manually\n");
		Dprintf("2- Add Student Details from text file\n");
		Dprintf("3- Find the student Details by Roll Number\n");
		Dprintf("4- Find the student Details by First Name\n");
		Dprintf("5- Find the student Details from Course ID\n");
		Dprintf("6- Find the total Number of students\n");
		Dprintf("7- Delete Students Details by Roll Number\n");
		Dprintf("8- Update Student Details by Roll Number\n");
		Dprintf("9- Show All Information\n");
		Dprintf("10- to Exit\n");
		Dprintf("Enter your choice to perform the task: ");
		scanf ("%d",&choice);
		switch (choice)
		{
		case 1:
			add_students_manually();
			break;
		case 2:
			add_students_From_File();
			break;
		case 3:
			Find_Student_by_Roll_Number();
			break;
		case 4:
			Find_Student_by_First_Name();
			break;
		case 5:
			Students_In_Same_Course();
			break;
		case 6:
			Total_Number_of_Students();
			break;
		case 7:
			Delete_Student_by_Roll_Number();
			break;
		case 8:
			Update_Student();
			break;
		case 9:
			Print_AllStudents();
			break;
		case 10:
			Dprintf("******Thank You For Using Our System******\n");
			exit (0);
			break;
		default:
			Dprintf("[ERROR] WRONG CHOICE\n");
		}
	}

	return 0;
}
