#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void passwd(int n)
{
	int i;
	int randomizer=0;
	srand(time(NULL));
	char numbers[]="0123456789";
	char symbols[]="!@#$%^&*?";
	char alpha[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[]="abcdefghijklmnopqrstuvwxyz";
	char password[n];
	randomizer=rand()%4;
	for(i=0;i<n;i++)
	{
		if(randomizer==1)
		{
			password[i]=numbers[rand()%10];
			randomizer=rand()%4;
			printf("%c",password[i]);
		}
		else if(randomizer==2)
		{
			password[i]=symbols[rand()%9];
			randomizer=rand()%4;
			printf("%c",password[i]);
		}
		else if(randomizer==3)
		{
			password[i]=alpha[rand()%26];
			randomizer=rand()%4;
			printf("%c",password[i]);
		}
		else 
		{
			password[i]=lower[rand()%26];
			randomizer=rand()%4;
			printf("%c",password[i]);
		}
	}
}
int main(void)
{
	int n;
	printf("Enter password length:\n");
	scanf("%d",&n);
	passwd(n);
	return 0;
}
		
