#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main()
{
    char query;
    printf("Do you want to input data?\n");
    scanf("%c",&query);
    query= 'y'|'n' ;
    if (query=='y')
    {
        details();
    }
    else
    {
        printf("Do you want to search for a particular data?\n");
    }
    return 0;
}