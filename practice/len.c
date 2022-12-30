#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac,char **av)
{
    int i,sum;
    if(ac<=1)
    {
        printf("Filename:%s\n",av[ac*0]);
        return 1;
    }
    else
    {
        for(i=0;i<ac;i++)
        {
            sum+=atoi(av[i]);
        }
        printf("%d \n",sum);
    }
    return 0;
}