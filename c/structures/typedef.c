#include <stdio.h>
#include <string.h>
typedef struct employee
{
	char name[50];
	int age;
	int salary;
}emp;
void main(void)
{
	emp s1;
	printf("Enter name:\n");
	gets(s1.name);
	printf("Age:\n");
	scanf("%d",&s1.age);
	printf("Salary:\n");
	scanf("%d",&s1.salary);
	printf("Name:%s\nAge:%d\nSalary:%d\n",s1.name,s1.age,s1.salary);
	
}
