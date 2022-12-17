#include <stdio.h>
int main(void)
{
	int j;
	int i,sum;
	int mike[5];
	printf("Enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&mike[i]);
	}
	for (j=0;j<5;j++)
	{
		printf("%d",mike[j]);
		putchar(',');
	}
	for(j=0;j<5;j++)
	{
		sum+=mike[j];
	}

	
	printf("%d",sum);
	return 0;
}

	
