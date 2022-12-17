#include <string.h>
#include <stdio.h>
int main()
{
	char mike[20];
	char syk[20];
	strcpy(mike,"michael");
	strcpy(syk,mike);
	printf("%s",syk);
	return 0;
}
