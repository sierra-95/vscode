#include <stdio.h>
void main()
{
	int i=98;
	int *p;
	p=&i;
	printf("%d\n%d",*p,p);
}
