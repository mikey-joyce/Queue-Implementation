#include "queue.h"

List *enqueue(List *node, int data){
	List *newNode;
	newNode = createNode(data);
	newNode->next=node;

	return newNode;
}

List *dequeue(List *node){
	List *temp=node;
	List *temp2;

	while(temp->next!=NULL){
		temp2=temp;
		temp=temp->next;
	}
	free(temp2->next);
	temp2->next=NULL;

	return node;
}
