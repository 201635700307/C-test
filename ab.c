#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("please input a=");
	scanf("%d",&a);
	printf("please input b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the result is ");
	printf("%d,%d\n",a,b);
	return 0;
}