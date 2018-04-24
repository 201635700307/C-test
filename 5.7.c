#include <stdio.h>
int main ()
{
	int a,b,sum1,sum2;
	float c,sum,sum3;
	a=1;
	b=1;
	c=1;
	sum1=0;
	sum2=0;
	sum3=0;
	while (a<=100)
	{
	sum1=sum1+a;
	a++;
	}
	while (b<=50)
	{
	sum2=sum2+b*b;
	b++;
	}
	while (c<=10)
	{
	sum3=sum3+(1/c);
	c++;
	}
	sum=sum1+sum2+sum3;
	printf ("the result is %f",sum);
	return 0;
}
