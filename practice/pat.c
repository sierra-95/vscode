#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *link
    }n;
int main(int ac, char **av)
{
    printf("Filename is %s \n",av[ac*0]);
    n *head=NULL;
    head=(n*)malloc(3*sizeof(n));
    head->data=45;
    head->link=NULL;
    printf("%d \n",head->data);
    n *current=malloc(sizeof(n));
    current->data=200;
    head->link=current;
    current->link=NULL;
    return 0;
    
}