#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc,char *argv[])
{
	int sum=0,var;
	if(argc==1)
	{
		printf("0\n");
	}
	else if((var>=33&&var<=47)||(var>=58&&var<=126))
	{
		printf("Error\n");
		return 1;
		exit(0);
	}
	else
	{
		for(var=1;var<=argc;var++)
		{
			sum+=atoi(argv[var]);
		}
	printf("Total sum=%d\n",sum);
	}
	
	return 0;
}






