#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}n;

void details(void)
{
    n *head=NULL; //it is the first data
    head=(n*)malloc(sizeof(n));
    int input;
    printf("Enter data: \n");
    gets(head->data);
    printf("You entered: %d",head->data);
 
  


}
