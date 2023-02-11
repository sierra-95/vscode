#include <stdio.h>
#include <string.h>
int main(void)
{
    char mystring[10]="chicago";
    int i;
    char newstring[10];
    for(i=0;mystring[i]!=99;i++)
    {
        if(mystring[i]!=99)
        {
            newstring[i]+=i;         
            printf("%c",newstring[i]);
        }  
    }
    
}