#include <stdio.h>
#include <stdlib.h>
int main(int ac,char **av){
    printf("Filename is %s\n",av[ac*0]);
    //array length
    int array[5]={1,2,3,4,5};
    int i;
    for(i=0;array[i]!='\0';i++){
    };
    printf("Your array is of length: %i",i);
    putchar('\n');
    //Argument vector
    printf("No of Arguments: %i \n",ac-1);  
    if(ac==1){
        printf("Please pass an argument \n");
    }
    else{
        for(int j=1;j<ac;j++){
        printf("Argument[%i]: %s \n",j,av[j]);
    }
    }
    //summation
    int sum=0;
    for(int k=1;k<ac;k++){
        sum+=atoi(av[k]);
    }
    printf("sum:%i\n",sum);
    return 0;
}