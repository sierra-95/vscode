#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{
	int var,ans=1;
	printf("File name is %s\n",argv[argc*0]);
	printf("No of arguments is %d\n",argc);
	if(argc==1||argc==2)
	{
		printf("Error!\n");
		return 1;
	}
	else
	{
		for(var=1;var<3;var++)
		{
			ans*=atoi(argv[var]);
		}
		printf("%d\n",ans);
		
	}
	return 0;
}

