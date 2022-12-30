#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);

int main(int ac,char **av)
{
    int res;
    if (ac !=3)
    {
        dprintf(2,"usage:%s filename text\n",av[ac*0]);
        exit(1);
    }
    res=create_file(av[1],av[2]);
    printf("->%i\n",res);
    return 0;
}

int create_file(const char *filename, char *text_content)
{
    int fd,sz,i;
    char *buf;
    if (filename==NULL)
    {
        return (-1);
    }
    if(text_content==NULL)
    {
        fd=open(filename,O_CREAT,0600);
        if(fd==-1)
        {
            return -1;
        }
        return 1;
    }
        for(i=0;text_content[i]!='\0';i++)
        ;
        buf=malloc(i*sizeof(char));
        if (buf==NULL)
        {
            return -1;
        }
        fd=open(filename,O_CREAT|O_TRUNC|O_WRONLY,0600);
        if (fd==-1)
        return -1;
        sz=write(fd,text_content,i);
        if(sz==-1)
        return -1;
        close(fd);
        free(buf);
        return 1;
    


        
    
    

}