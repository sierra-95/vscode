#include <stdio.h>
int main(void)
{
	int i;
	int mike[3]={1,2,3};
	int *p=mike;
	//array mike holds addresses hence p will store them
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(mike+i));
		//mike+i=p
		//*p=*(mike +i)
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
