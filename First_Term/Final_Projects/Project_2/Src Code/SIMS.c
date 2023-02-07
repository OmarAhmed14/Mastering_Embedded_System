/*
 * SIMS.c
 *
 *  Created on: Feb 4, 2023
 *      Eng: Omar Ahmed
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SIMS.h"

sinfo* head=NULL; sinfo* tail=NULL;

static sinfo* Create_Node ()
{
	sinfo* ptr = (sinfo*) malloc (sizeof(sinfo));
	return ptr;
}

void add_students_manually ()
{
	sinfo* New_Student=Create_Node ();

	if (head==NULL)
	{
		head= New_Student;
		tail= New_Student;
	}
	else
	{
		tail->next = New_Student;
		tail = New_Student;
	}
	New_Student->next=NULL;

	Dprintf("----Enter Information of the Student-----\n");
	Information:
	Dprintf ("Enter roll: ");
	scanf ("%d",&New_Student->roll);
	if (IS_RollExist (New_Student->roll)==1)
	{
		Dprintf("Roll Number %d is already taken\n",New_Student->roll);
		goto Information;
	}
	Dprintf ("Enter First Name: ");
	scanf ("%s",New_Student->fname);
	Dprintf ("Enter Last Name: ");
	scanf ("%s",New_Student->lname);
	Dprintf ("Enter GPA: ");
	scanf ("%f",&New_Student->GPA);
	Dprintf ("Enter Course ID of each course:\n");
	for (int i=0; i<5;i++){
		Dprintf ("Course %d ID: ",i+1);
		scanf ("%d",&New_Student->cid[i]);
	}
	Dprintf ("Student Information is added successfully\n");
}

void Print_AllStudents ()
{
	sinfo* current =head;
	if (current==NULL){
		Dprintf ("Empty List\n");}
	else
	{
		while (current!= NULL)
		{
			Dprintf ("Student First Name: %s\n",current->fname);
			Dprintf ("Student Last Name: %s\n",current->lname);
			Dprintf ("Student Roll Number: %d\n",current->roll);
			Dprintf ("Student GPA: %.2f\n",current->GPA);
			for (int i=0; i<5;i++){
				Dprintf ("Course %d ID is %d\n",i+1,current->cid[i]);}
			current=current->next;
			Dprintf ("---------------------------\n");
		}
	}
}

int IS_RollExist (int roll)
{
	sinfo* current =head;
	while (current!=tail)
	{
		if (roll==current->roll)
		{
			return 1;
		}
		current=current->next;
	}
	return 0;
}

void Find_Student_by_Roll_Number ()
{
	int roll,flag=1;
	sinfo* current=head;
	Dprintf("Enter Roll Number: ");
	scanf ("%d",&roll);

	while (current!=NULL)
	{
		if (roll==current->roll)
		{
			flag=0;
			Dprintf ("-----Student Details-----\n");
			Dprintf ("Student First Name: %s\n",current->fname);
			Dprintf ("Student Last Name: %s\n",current->lname);
			Dprintf ("Student GPA: %.2f\n",current->GPA);
			Dprintf ("--------Courses--------\n");
			for (int i=0; i<5;i++){
				Dprintf ("Course %d ID is %d\n",i+1,current->cid[i]);}
			break;
		}
		else
			current=current->next;
	}
	if (flag){
		Dprintf ("Roll Number %d is not found\n",roll);}
}

void Find_Student_by_First_Name ()
{
	int flag=1;char name[50];
	sinfo* current = head;
	Dprintf ("Enter the First Name of Student:");
	scanf("%s",name);
	while (current!=NULL)
	{
		if (strcmp(current->fname,name)==0)
		{
			flag=0;
			Dprintf ("-----Student Details-----\n");
			Dprintf ("Student First Name: %s\n",current->fname);
			Dprintf ("Student Last Name: %s\n",current->lname);
			Dprintf ("Student GPA: %.2f\n",current->GPA);
			Dprintf ("--------Courses--------\n");
			for (int i=0; i<5;i++){
				Dprintf ("Course %d ID is %d\n",i+1,current->cid[i]);}

		}
			current=current->next;
	}
	if (flag)
	{Dprintf ("First Name %s is not found\n",name);}
}

void Students_In_Same_Course ()
{
	int id,flag=1,count=0; sinfo* current=head;
	Dprintf("Enter the course ID: ")
	scanf ("%d",&id);

	while (current!=NULL)
	{
		for (int i=0;i<5;i++)
		{
			if (id==current->cid[i])
			{
				count++;
				flag=0;
				Dprintf ("-----Student Details-----\n");
				Dprintf ("Student First Name: %s\n",current->fname);
				Dprintf ("Student Last Name: %s\n",current->lname);
				Dprintf ("Student GPA: %.2f\n",current->GPA);
			}
		}
		current=current->next;
	}
	if (flag)
	{Dprintf("[ERORR] Course ID %d is not found\n",id);}
	else
	{Dprintf("[INFO] Total Number of students Enrolled is %d\n",count);}
}

void Total_Number_of_Students ()
{
	int count=0; sinfo* current=head;
	while (current!=NULL)
	{
		count++;
		current=current->next;
	}
	Dprintf("Total Number of Students is %d\n",count);
}

void Delete_Student_by_Roll_Number ()
{
	sinfo* current=head; sinfo* prev=NULL; int roll,flag=1;
	Dprintf("Enter the Roll Number which you want to delete: ");
	scanf ("%d",&roll);

	while (current!=NULL)
	{
		if (roll==current->roll)
		{
			flag=0;
			if (head==current)
			{
				head=current->next;
				free(current);
				Dprintf("Roll Number is removed successfully\n");
				break;
			}
			else if (current->next==NULL)
			{
				prev->next=NULL;
				free(current);
				Dprintf("Roll Number is removed successfully\n");
				break;
			}
			else
			{
				prev->next =current->next;
				free(current);
				Dprintf("Roll Number is removed successfully\n");
				break;
			}
		}
		prev=current;
		current=current->next;
	}
	if (flag)
	{Dprintf("Roll Number %d is not found\n",roll);}
}

void Update_Student ()
{
	int roll,rollNew,choice,flag=1; sinfo* current=head;

	Dprintf("Enter Roll Number of the student whom you want to update: ");
	scanf("%d",&roll);

	while (current!=NULL)
	{
		if (roll == current->roll)
		{
			flag=0;
			Dprintf("1- First Name\n2- Last Name\n3- Roll Number\n4- GPA\n5- Courses\n");
			scanf ("%d",&choice);

			switch (choice)
			{
			case 1:
				Dprintf("Enter New First Name: ");
				scanf ("%s",current->fname);
				Dprintf("[INFO] UPDATED SUCCESSFULLY\n");
				break;
			case 2:
				Dprintf("Enter New Last Name: ");
				scanf ("%s",current->lname);
				Dprintf("[INFO] UPDATED SUCCESSFULLY\n");
				break;
			case 3:
				Dprintf("Enter New Roll Number: ");
				scanf ("%d",&rollNew);
				if (IS_RollExist (rollNew)==1)
					{
						Dprintf("Roll Number %d is already taken\n",current->roll);
						Dprintf("[ERORR] UPDATED FAILED\n");
					}
				else
				{
					current->roll=rollNew;
					Dprintf("[INFO] UPDATED SUCCESSFULLY\n");
				}
				break;
			case 4:
				Dprintf("Enter New GPA: ");
				scanf ("%f",&current->GPA);
				Dprintf("[INFO] UPDATED SUCCESSFULLY\n");
				break;
			case 5:
				Dprintf("-----Enter New Courses-----\n");
				for (int i=0;i<5;i++)
				{
					Dprintf("Enter Course ID %d: ",i+1);
					scanf ("%d",&current->cid[i]);
				}
				Dprintf("[INFO] UPDATED SUCCESSFULLY\n");
				break;
			default:
				Dprintf("Wrong Choice\n");
			}
		}
		current=current->next;
	}
	if (flag)
	{Dprintf("Roll Number %d is not found\n",roll);}
}

void add_students_From_File ()
{
	FILE* fptr;int RollNum, CID[5]; //n, FileCount=0, line =0;
	float GPA; char FName[50], LName[50];


	fptr = fopen ("file.txt","r");

	while (fscanf(fptr,"%d %s %s %f %d %d %d %d %d",&RollNum,FName,LName,&GPA,&CID[0],&CID[1],&CID[2],&CID[3],&CID[4])!=EOF)
	{
		if (IS_RollExist(RollNum))
		{
			Dprintf("[ERROR] Roll Number %d is already taken\n",RollNum);
			continue;
		}
		sinfo* New_Student=Create_Node ();

		if (head==NULL)
		{
			head= New_Student;
			tail= New_Student;
		}
		else
		{
			tail->next = New_Student;
			tail = New_Student;
		}
		New_Student->next=NULL;

		New_Student->roll=RollNum;
		New_Student->GPA=GPA;
		strcpy(New_Student->fname,FName);
		strcpy(New_Student->lname,LName);
		for (int i=0;i<5;i++)
		{
			New_Student->cid[i]=CID[i];
		}
		Dprintf("[INFO] Roll Number %d is saved Successfully\n",RollNum);
	}


	fclose (fptr);
}


