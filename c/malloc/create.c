#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *create(unsigned int size,char c[]);

int main(int argc,char *argv[])
{
	printf("Filename:%s\n",argv[argc*0]);
	printf("Arguments:%d\n",argc);
	int size;
	char *c;
	printf("Enter size:\n");
	scanf("%d",&size);
	create(size,c[]);
	printf("%s\n",c);
	return 0;
}

char *create(unsigned int size,char c[])
{
	char *array=NULL;
	unsigned int i;
	if(size==0)
	{
		return NULL;
	}
	if(size!=0)
	{
		array=(char*)malloc(size*sizeof(char));
		gets(c);

	}
}
