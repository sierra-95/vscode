#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    int fd, fd2,w;
    ssize_t sz=1024;
    char buf[1024];

    if(ac !=3)
    {
        dprintf(2,"Usage: cp file_from file_to \n");
        /* 2- stands for STDERR_FILENO
        *  1- stands for STDOUT_FILENO
        *  0- stands for STDIN_FILENO
        */
       exit(97);

    }
    fd=open(av[1],O_RDONLY);
    if (fd==-1)
    {
        dprintf(2,"Error: Cant read from file %s\n",av[1]);
        exit(98);
    }
    fd2=open(av[2],O_WRONLY|O_CREAT|O_TRUNC|O_APPEND,0664);
    if(fd2==-1)
    {
        dprintf(2,"Error: Cant write to %s\n",av[2]);
        exit(99);
    }
    while(sz==1024)
    {
        sz=read(fd,buf,1024);
        if(sz==-1)
        {
            dprintf(2,"Error: Cant read from file %s\n",av[1]);
            exit(98);
        }
        w=write(fd2,buf,sz);
        if(w==-1)
        {
            dprintf(2,"Error: Cant write to %s\n",av[2]);
            exit(99);
        }
    }
    if (close(fd)==-1)
    {
        dprintf(2,"Error: cant close fd %d\n",fd);
        exit(100);
    }
    if (close(fd2)==-1)
    {
        dprintf(2,"Error: cant close fd %d\n",fd2);
        exit(100);
        
    }
    return 0;
}