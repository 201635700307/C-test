#include <stdio.h>
int main ()
{
	float a,n,b,sum;
	n=1;
	sum=100;
	b=0;
	a=100;
	while(n<=2)
	{
	sum=sum+2*b;
	a=a/2;
	b=a;
	n++;
	}
	printf("%f,%f",sum,a);
	return 0;
}
