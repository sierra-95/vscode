#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void robot(void)
{
	srand(time(NULL));
	
	int c[10],d[10],sum[1],i,add[1];
	int a[10]={6,7,8,9,10,11,12,13,14,15};
	int b[10]={16,17,18,19,20,21,22,23,24,25};
	for(i=0;i<2;i++)
	{
	c[i]=a[rand()%10];
	d[i]=b[rand()%10];
	}
	printf("Are you a robot?\n %d + %d=?\n",c[1],d[1]);
	scanf("%d",&sum[1]);
	add[1]=c[1]+d[1];
	if(sum[1]==add[1])
	{
		printf("Verified !\n Welcome\n");
	}
	else
	{
		printf("Error 404\n");
	}
	
}
