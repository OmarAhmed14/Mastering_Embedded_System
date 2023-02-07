/*
 * SIMS.h
 *
 *  Created on: Feb 4, 2023
 *      Eng: Omar Ahmed
 */

#ifndef SIMS_H_
#define SIMS_H_

#define Dprintf(...);      printf(__VA_ARGS__);\
						   fflush (stdin);\
                           fflush (stdout);
typedef struct student
{
	char fname [50];
	char lname [50];
	int cid [10];
	int roll;
	float GPA;
	struct student* next;
}sinfo;

static sinfo* Create_Node ();

void add_students_From_File ();
void add_students_manually ();
void Print_AllStudents ();
int IS_RollExist (int roll);
void Find_Student_by_Roll_Number ();
void Find_Student_by_First_Name ();
void Students_In_Same_Course ();
void Total_Number_of_Students ();
void Delete_Student_by_Roll_Number ();
void Update_Student ();

#endif /* SIMS_H_ */
