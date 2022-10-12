/*
 * Data_Base_Students.h
 *
 *  Created on: Oct 12, 2022
 *      Author: Omar Ahmed
 */

#ifndef DATA_BASE_STUDENTS_H_
#define DATA_BASE_STUDENTS_H_

#include "stdio.h"
#include "stdlib.h"

#define Dprintf(...)    fflush (stdin);\
						fflush(stdout);\
						printf(__VA_ARGS__);\
						fflush (stdin);\
						fflush(stdout);

typedef struct student
{
	int id;
	float height;
	char name [40];
	struct student* next;
}student;


void Add_Student();

int Delete_Student();

void View_Students();

void Delete_AllStudents();

void Find_Node ();

void Numbers_Students();

void Find_Node_End ();

void Find_Middle();

void Reverse_List();

#endif /* DATA_BASE_STUDENTS_H_ */
