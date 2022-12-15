#include <stdio.h>
#include <string.h>
typedef struct cars{
	char name[50];
	int  price;
           }c;
int main(void)
{
	int i;
	c bugatti;
        c *p=&bugatti;
	printf("Enter name,price respectifully");
	gets(bugatti.name);
	scanf("%d",&bugatti.price);
	printf("Name:%s\nPrice:%d\n",p->name,p->price);
	return 0;
}
