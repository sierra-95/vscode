/*SELF REFERENTIAL STRUCTURE*/
#include <stdio.h>
#include <stdlib.h>
typedef struct michael{
	int i;
	char c;
	struct michael *p;
}mike;
int main(void)
{
	mike var1,var2;
	var1.i=65;
	var1.c='a';
	var1.p=NULL;
	var2.i=66;
	var2.c='b';
	var2.p=NULL;
	var1.p=&var2;
	printf("%d%c",var1.p);
	return 0;
}
