#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct mike{
    char mike[10];
}m;

void main(int ac,char **av)
{
    m *head=NULL;
    head=(m*)malloc(2*sizeof(m));
    printf("Argc:%s\n",av[ac*0]);
    gets(head->mike);
    int i;
    for(i=0;head->mike[i]!='\0';i++)
    ;
    putchar(i+'0');
}