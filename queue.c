#include "queue.h"

int main(void){
	List *myQueue=initList();

	myQueue=enqueue(myQueue, 4);
	myQueue=enqueue(myQueue, 3);
	myQueue=enqueue(myQueue, 2);
	myQueue=enqueue(myQueue, 1);

	printf("After enqueue:\n");
	printList(myQueue);

	myQueue=dequeue(myQueue);

	printf("After dequeue:\n");
	printList(myQueue);

	freeList(myQueue);
}

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
