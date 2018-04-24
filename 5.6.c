#include<stdio.h>
int main () {
	int n,a,sum;
	a=1;
	i=1;
	sum=0;
	while (n<=20)
	{ 
	sum=sum+a;
	a=a*(a+1);
	i++;
	}
	printf ("the result is %d",sum);
	return 0;
}