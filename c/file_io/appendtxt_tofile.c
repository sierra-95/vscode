#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content);
/*
*append_text_to_file -appends text at the end of file
*filename: name of the file to create
*text_content:string to appends in the file
*Return: 1 on success and -1 on failure
*/

int main(int ac,char **av)
{
   
    int res;
    if (ac !=3)
    {
        dprintf(2,"usage:%s filename text\n",av[ac*0]);
        exit(1);
    }
    res=append_text_to_file(av[1],av[2]);
    printf("->%i\n",res);
    return 0; 
}
int append_text_to_file(const char *filename, char *text_content)
{
    int fd,sz,i;
    char *buf;
    if(filename==NULL)
    {
        return -1;
    }
    if(text_content==NULL)
    return (-1);

    for(i=0;text_content[i]!='\0';i++)
    ;
    buf=malloc(i*sizeof(char));
    if (buf==NULL)
    return (-1);
    fd=open(filename,O_RDWR|O_APPEND);
    if(fd==-1)
    return (-1);
    sz=write(fd,text_content,i);
    if (sz==-1)
    return -1;
    close(fd);
    free(buf);
    return 1;
    
}
