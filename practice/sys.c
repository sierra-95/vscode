#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    if(ac==1)
    {
            printf("File name : %s\n ",av[ac*0]);
    }
    else    
    {
        for(i=1;i<ac;i++)
        {
            printf("%s \n",av[i]);
        }
    }
    
    return 0;
}