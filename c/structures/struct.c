#include <stdio.h>
#include <string.h>
struct student
{
	char name[25];
	int age;
	char school[50];
	char gender[2];
};
int main()
{
	struct student s1;
	printf("Enter school\n");
	gets(s1.school);
	printf("Enter age \n");
	scanf("%d",&s1.age);
	 printf("Enter name \n");
	 gets(s1.name);
	  printf("Enter gender \n");
	  gets(s1.gender);
	printf("school:%s\nage:%d\nname:%s\ngender:%s",s1.school,s1.age,s1.name,s1.gender);
	return 0;
}
