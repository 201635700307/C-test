#include <stdio.h>
int main ()
{int a(int x,int y);
 int b(int m,int n);
 int i,j;
 printf("please input the first number;");
 scanf("%d",&i); 
 printf("please input the second number;");
 scanf("%d",&j); 
 printf("�������������Լ����%d",a(i,j));
 printf("������������С��������%d",i*j/a(i,j));
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

   