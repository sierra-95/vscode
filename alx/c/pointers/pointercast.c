//pointer type conversion by use of explicit cast
#include <stdio.h>
int main(void)
{
	double a= 100.0001;
	int *p;
	p=(int *)&a;//ponter casting avoids truncation
	printf("%lf",*p);
	return 0;
}
	// value of 'b' should be same as 'a', but it won't be
	// For pointer type other than void *, we have to explicitly cast pointer from one type to another. But this can lead to unexpected behaviour for incompatible datatypes.
