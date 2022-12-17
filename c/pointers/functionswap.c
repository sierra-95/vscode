#include <stdio.h>
void swap(int *a,int *b);
int main(void)
{
	int m=4,n=3;
	printf("m:%d\nn:%d\n",m,n);
	swap(&m,&n);
	printf("m:%d\nn:%d\n",m,n);
	return 0;
}
void swap(int *a,int *b)
{
	int swapping;
	swapping=*a;
	*a=*b;
	*b=swapping;
}
