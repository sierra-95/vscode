#include <stdio.h>
#include <string.h>
int main(void)
{
	char mike[20];
	gets(mike);
	printf("%s",strrev(mike));
	return 0;
}

