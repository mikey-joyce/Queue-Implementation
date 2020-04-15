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
