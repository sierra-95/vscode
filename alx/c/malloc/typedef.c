#include <stdio.h>
#include <string.h>
typedef struct Michael{
	char name[20];
	int age;
	int salary;
}mike;
void  add(int a,int b);
int main(int argc,char *argv[])
{
	int i;
	mike s1;
	mike *p=&s1;
	if(argc==1)
		printf("%d\n",argc-1);
	else
	{
		for(i=0;*argv;i++,argv++)
			;
		printf("%d\n",i-1);
	}
	printf("Enter Name:");
	gets(p->name);
	printf("Enter age:");
	scanf("%d",&p->age);
	return 0;
}

