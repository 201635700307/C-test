#include <stdio.h>
int main ()
{ int n,i,t;
int a[20];
printf("intput n=");
scanf_s("%d",&n);
for (i=0;i<n;i++)
	{printf("intput a[%d]=",i);
	scanf_s("%d",&a[i]);
	printf("\n");}
for(i=0;i<n/2;i++)
	{t=a[i];
    a[i]=a[n-i];
	a[n-i]=t;}
printf("the result is ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}