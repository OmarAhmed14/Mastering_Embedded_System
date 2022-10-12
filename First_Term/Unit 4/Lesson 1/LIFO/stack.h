#ifndef QUEUE_H
#define QUEUE_H


typedef struct N
{
	int data;
	struct N * next;
}node;

static node* Create_Node (int num);

void Push (int num);

int Pop ();

int IsEmpty ();

int Peek ();

int Size_Stack ();

void Print_List ();

#endif