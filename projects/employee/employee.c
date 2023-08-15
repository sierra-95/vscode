#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct employee{
	char name[50];
		int age;
	char gender[1];
	int flag;
}emp;
void details(void)
{
	emp *head=NULL;
	head=(emp*)malloc(sizeof(emp));
	printf("Enter your name:\n");
	gets(head->name);
	printf("Enter your age:\n");
	scanf("%d",&head->age);
	printf("Enter your gender. Enter m if male,f for female,o for others\n");
	scanf("%s",&head->gender);
	printf("Confirm the details above.Enter 1 if true and 2 if false:\n");
	scanf("%d",&head->flag);
	if((head->flag)==2)
	{
		printf("Try again\n");
	}
	else
	{
		printf("Name:%s\nAge:%d\nGender:%s\n",head->name,head->age,head->gender);
	}
}

	
