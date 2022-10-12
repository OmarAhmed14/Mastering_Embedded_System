#ifndef QUEUE_H
#define QUEUE_H


typedef struct N
{
	int data;
	struct N * next;
}node;

static node* Create_Node (int num);

void Enqueue (int num);

int Dequeue ();

int IsEmpty ();

int Peek ();

int Size_queue ();

void Print_List ();

#endif