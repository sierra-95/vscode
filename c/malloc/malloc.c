#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *ptr;
	ptr=malloc(5*sizeof(int));
	printf("%d",sizeof(ptr));
	return 0;
}
