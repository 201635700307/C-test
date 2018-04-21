#include <stdio.h>
int main ()
{ int a=2,n,b,sum,i;
sum=0;
i=1;
b=0;
printf("请输入n的值：");
scanf_s("%d",&n);
while (i<=n)
{b=b*10+a;
sum=b+sum;
i++;
}
printf("结果为%d",sum);
return 0;
}