#include <stdio.h>
int main ()
{int a[4];
int i;
for(i=0;i<4;i++)
{printf("请输入第%d个数字：",i+1);
scanf("%d",&a[i]);}
for(i=0;i<4;i++)
	printf("%d ",a[i]);
return 0;
}
