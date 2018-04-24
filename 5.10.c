#include <stdio.h>
int main ()
{
    float a,b,i; 
	float sum;
	sum=2;
	i=1;
	a=1;
	b=2;
	while (i<=20)
	{b=b+a;
	a=b-a;
	sum=sum+(b/a);
	i++;
	}
	printf ("the result is %f",sum);
	return 0;
}