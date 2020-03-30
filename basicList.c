#include "basicList.h"

List *initList(){
	return NULL;
}

List *createNode(int data){
	List *node;
	node = (List *)malloc(sizeof(List));
	if(node){
		node->next=NULL;
		node->data=data;
	}
	return node;
}

void freeList(List *node){
	List *temp;

	while(node!=NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
	printf("Free was successful!\n");
}

void printList(List *node){
	while(node!=NULL){
		int i = 0;
		i = node->data;
		printf("%d\n", i);
		node = node->next;
	}
}
