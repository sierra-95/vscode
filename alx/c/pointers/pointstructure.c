#include <stdio.h>
#include <string.h>
typedef struct employee{

	int  age;
	int salary;
}emp;
int main(void)
{
	emp s1;
	
	   printf("Enter age:"); 
	   scanf("%d",&s1.age);
	      printf("Enter salary:");
	      scanf("%d",&s1.salary);
	      emp *p;
	      p=&s1;

	        
		printf("Age:%d\nSalary:%d\n",p->age,p->salary);
		 return 0;
}

