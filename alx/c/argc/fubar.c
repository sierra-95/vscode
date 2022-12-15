#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
	int count;
	printf("File name %s\n",argv[argc*0]);
	if(argc>1)
	{
		for(count=1;count<argc;count++)
		{
			printf("argv[%d]=%s\n",count,argv[count]);
		}
	}
		else
		{
			printf("End of arguments\n");
		}
	
	return 0;
}
