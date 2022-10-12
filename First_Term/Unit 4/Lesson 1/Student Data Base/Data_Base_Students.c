/*
 * Data_Base_Students.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Omar Ahmed
 */

#include "Data_Base_Students.h"

student* head=NULL; student* tail=NULL;

void Add_Student()
{
	student* new = (student*)malloc (sizeof (student));

	printf("Enter ID: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&new->id);

	printf ("Enter Student Full Name: ");
	fflush(stdin);fflush(stdout);
	gets(new->name);

	printf ("Enter Height: ");
	fflush(stdin);fflush(stdout);
	scanf ("%f",&new->height);


	if (head==NULL)
	{
		head =new;
		tail=new;
	}
	else
	{
		tail->next=new;
		tail=new;
	}
	tail->next=NULL;
}

int Delete_Student()
{
	int Selected_ID=0;
	student* temp=head;
	student* prev=NULL;

	if (temp==NULL)
		printf("\n=============\nEmpty List\n==============\n");
	else
	{
		printf ("Enter Student ID to be deleted: ");
		fflush(stdin);fflush(stdout);
		scanf ("%d",&Selected_ID);

		while (temp)
		{
			if (temp->id == Selected_ID)
			{
				if (prev==NULL)
				{
					head=temp->next;
					free(temp);
				}
				else
				{
					if (temp->next==NULL)
					{
						tail = prev;
						tail->next =NULL;
						free (temp);
					}
					else
					{
						prev->next=temp->next;
						temp->next=prev;
						free (temp);
					}
				}
				return 1;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}

		printf ("this is ID NOT EXIST\n");
	}
	return 0;
}

void View_Students()
{
	student *temp=head;
	int index=1;

	if (temp==NULL)
		printf("\n=============\nEmpty List\n==============\n");
	else
	{
		while (temp)
		{
			printf ("====================\n");
			printf ("Record Number %d\n",index);
			printf ("ID: %d\n",temp->id);
			printf ("Name: %s\n",temp->name);
			printf ("Height: %.2f\n",temp->height);
			printf ("====================\n");
			index++;
			temp= temp->next;
		}
	}
}

void Delete_AllStudents()
{
	student* temp =head;

	if (temp==NULL)
		printf("\n=============\nEmpty List\n==============\n");
	else
	{
		while (temp)
		{
			head = temp->next;
			free (temp);
			temp =head;
		}
		head =NULL;
	}

}

void Find_Node ()
{
	student *Node=head;
	int count =0,index=0;

	if (Node == NULL)
		printf("\n=============\nEmpty List\n==============\n");
	else
	{
		printf("Enter Index YOU Want: ");
		fflush(stdin);fflush (stdout);
		scanf ("%d",&index);

		while (Node)
		{
			if (index == count)
			{
				printf ("Index Number %d\n",index);
				printf ("ID: %d\n",Node->id);
				printf ("Name: %s\n",Node->name);
				printf ("Height: %.2f\n",Node->height);
				break;
			}
			else
			{
				Node=Node->next;
				count++;
			}

		}
	}
}

void Numbers_Students()
{
	student* temp=head;
	int Counts=0;

	if (temp==NULL)
		printf("\n=============\nEmpty List\n==============\n");
	else
	{
		while (temp)
		{
			Counts ++;
			temp=temp->next;
		}
		printf("Length of the List is %d",Counts);
	}
}

void Find_Node_End ()
{
	student* Main=head,*ref=head;
	int index;

	printf ("Enter Index from End: ");
	fflush(stdin);fflush(stdout);
	scanf ("%d",&index);

	while (ref)
	{
		if (index)
		{
			ref=ref->next;
			index--;
		}
		else
		{
			ref=ref->next;
			Main=Main->next;
		}
	}
	printf ("ID: %d\n",Main->id);
	printf ("Name: %s\n",Main->name);
	printf ("Height: %.2f\n",Main->height);
}

void Find_Middle()
{
	student* slow=head,*fast=head;

	while (fast!=NULL)
	{
		if (fast->next == NULL)
			break;
		slow=slow->next;
		fast=fast->next->next;
	}
	printf ("ID: %d\n",slow->id);
	printf ("Name: %s\n",slow->name);
	printf ("Height: %.2f\n",slow->height);
}

void Reverse_List()
{
	student* temp=head;
	student* prev=head;
	student* next=head;

	if (temp==NULL)
			printf("\n=============\nEmpty List\n==============\n");
	else
	{
		while (temp)
		{
			next = temp->next;
			temp->next=prev;
			prev=temp;
			temp =next;
		}
		head->next=NULL;
		head=prev;
	}
}
