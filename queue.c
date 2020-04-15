#include "queue.h"

/*This function creates and enqueues a List *node with an integer as data
into the queue. Has O(1) complexity.*/
List *enqueue(List *node, int data){
	//Declare and initialize the new node with the given data
	List *newNode;
	newNode = createNode(data);

	//If valid
	if(newNode){
		//Set the new node to be the head of the list
		newNode->next=node;

		//Return the new head of the list
		return newNode;
	}
	else{
		//Node was not valid
		return NULL;
	}
}

/*This function takes a pointer to a list and deletes the tail of the list.
Has O(N) complexity.*/
List *dequeue(List *node){
	//create temporary nodes
	List *temp=node;
	List *temp2;

	//traverse the list
	while(temp->next!=NULL){
		//Obtains the tail of the list
		temp2=temp;
		temp=temp->next;
	}
	//Once node is found free memory and set its next pointer to NULL
	free(temp2->next);
	temp2->next=NULL;

	//return head of the list.
	return node;
}
