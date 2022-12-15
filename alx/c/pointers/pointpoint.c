#include <stdio.h>
int main(void)
{
	int a=10;
	int *p=&a;
	int **p2=&p;
	/**PRINTING VALUE OF A
	 * print a,*p,**p2
	 * PRINTING ADDRESS OF A
	 * print &a,p,*p2
	 */
	printf("%d",a);
	 printf("%d",*p); 
	  printf("%d",**p2); 
	   printf("%d",&a); 
	    printf("%d",p); 
	     printf("%d",*p2); 

	     return 0;
}

