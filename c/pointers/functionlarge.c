#include <stdio.h>
int* larger(int *x,int *y);
int main()
{
	int a=15,b=35;
	int *p=larger(&a,&b);
	printf("%d is larger",*p);
	return 0;
}
int* larger(int *x,int *y)
{
	if(*x>*y)
		return x;
	else
		return y;
}

