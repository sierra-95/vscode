#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *link;
}n;
int main(void)
{
	n *head=NULL,*current=NULL;
	head=(n*)malloc(sizeof(n));
	head->data=45;
	head->link=NULL;
	current=(n*)malloc(sizeof(n));
	current->data=98;
	current->link=NULL;
	head->link=current;
	//add third data
	printf("2nd node=%d\n",current->data);
	current=(n*)malloc(sizeof(n));
	printf("Enter\n:");
	scanf("%d",&current->data);
	current->link=NULL;
	head->link->link=current;
	printf("3rd node=%d\n",current->data);
	return 0;
}

