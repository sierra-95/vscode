#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t mike;
	mike=getpid();
	printf("PID: %u \n",mike);
	return 0;
}
