#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	printf("File name:%s\n",argv[argc*0]);
	printf("Arguments:%d\n",argc);
	char *s;
	int i=0;
	while(1)
	{
		s=malloc(INT_MAX);
		if(s==NULL)
		{
			printf("Cant allocate %d bytes after %d calls\n",INT_MAX,i);
			return 1;
		}
		s[0]='H';
		i++;
	}
	return 0;
}
