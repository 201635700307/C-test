#include<stdio.h>
#include<math.h>
int main ()
{void b(int x);
	int a;
	printf("������һ������");
    scanf_s("%d",&a);
	b(a);
return 0;
}

void b(int x)
{int i,k;
k=sqrt(x);
	for(i=2;i<=k;i++)
	{if(x%i==0)
	{break;}}
	if(i>k)
	{printf("����������");}
	else {
	printf("������������");}

	}