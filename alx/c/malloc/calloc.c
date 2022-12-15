#include <stdio.h>
#include <stdlib.h>
typedef struct michael{
	char *mike;
	int salary;
}mike;
int main()
{
	mike *p1;
	p1=(mike *)calloc(50,sizeof(mike));
	putchar(sizeof(p1)+'0');
	putchar('\n');
	printf("\nEnter salary:");
	scanf("%d",&p1->salary);
	printf("Enter name:");
	scanf("%s",&p1->mike);
	return 0;
}
