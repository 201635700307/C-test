#include <stdio.h>
int main ()
{int a(int x,int y);
 int b(int m,int n);
 int i,j;
 printf("please input the first number;");
 scanf("%d",&i); 
 printf("please input the second number;");
 scanf("%d",&j); 
 printf("这两个数的最大公约数是%d",a(i,j));
 printf("这两个数的最小公倍数是%d",i*j/a(i,j));
 return 0;
}

int a(int x,int y)
{int c;
c=x%y;
	while(c!=0)
		{
		x=y;
	    y=c;
       c=x%y;
}
return(y);
}

   