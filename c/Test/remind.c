#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct mike{
    char name[20];
    int age;
    int salary;
}m;
int main(int argc, char *argv[])
{
    printf("File name :%s\n",argv[argc*0]);
    printf("Number of arguments:%d\n",argc);
    m *head=NULL;
    head=(m*)malloc(2*sizeof(m));
    printf("Name:\n");
    gets(head->name);
    printf("Age:\n");
    scanf("%d",&head->age);
    printf("Salary:\n");
    scanf("%d",&head->salary);
    free(head);
    return 0;
}