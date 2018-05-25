#include<stdio.h>
int main ()
{int x(int y[10]);
int a[10];
int i;
for(i=0;i<10;i++)
{scanf_s("%d",&a[i]);}
x(a);
for (i=0;i<10;i++)
	printf("%d ",a[i]);
return 0;
}

int x(int y[10])
{int m,n,t;
for(m=0;m<9;m++)
	for(n=0;n<9-m;n++)
		if(y[n]>y[n+1])
			{t=y[n];
          y[n]=y[n+1];
		  y[n+1]=t;}
		  return y[10];
}