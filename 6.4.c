#include <stdio.h>
int main ()
{int a[10]={1,3,5,7,11,13};
int x,i,t;
printf("input x=");
scanf("%d",&x);
a[6]=x;
for (i=5;i>=0;i--)
if (a[i+1]<a[i])
{t=a[i+1];
a[i+1]=a[i];
a[i]=t;}
for(i=0;i<7;i++)
	printf("%d ",a[i]);
 return 0;
}
