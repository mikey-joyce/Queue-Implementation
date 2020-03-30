#include<stdlib.h>
#include<stdio.h>

typedef struct liststruct{
	int data;
	struct liststruct *next;
}List;

List *initList();
List *createNode(int);
void freeList(List *);
void printList(List *);
