#include <stdio.h>
void lower(char a);

int main(void)
{
    char islower;
    gets(islower);
    lower(islower);
}
void lower(char a)
{
    if(a>=97 && a<=122)
    {
        printf("Islower");
    }
    else
    {
        printf("Isalpha");
    }
}