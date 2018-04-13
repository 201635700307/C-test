#include <stdio.h>
#include <math.h>
int main ()
{
	float x;
	float y;
	printf("please input x=");
	scanf_s("%f",&x);
	if (x<1)
	{y=x;}
	else if (x>=1||x<10)
	{y=2*x-1;}
	else if (x>=10)
	{y=3*x-11;}
	printf("y=%f",y);
	return 0;
}