#include <stdio.h>
#include <string.h>
int main(void)
{
    char mike[10];
    gets(mike);
    int i;
    for(i=0;i<strlen(mike);i++)
    {
        printf("%c",mike[i]);
        putchar('\n');
    }
    printf("%s\n",strrev(mike));
    return 0;
}