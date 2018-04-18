#include <stdio.h>
int main ()
{ int a,b,c,d,t;
printf ("请输入一个四位数\n");
printf ("请输入第一位数：");
scanf_s("%d",&a);
printf ("请输入第二位数：");
scanf_s("%d",&b);
printf ("请输入第三位数：");
scanf_s("%d",&c);
printf ("请输入第四位数：");
scanf_s("%d",&d);
if(a>b) {t=a;a=b;b=t;}
if(a>c) {t=a;a=c;c=t;} 
if(a>d) {t=a;a=d;d=t;} 
if(b>c) {t=b;b=c;c=t;} 
if(b>d) {t=b;b=d;d=t;} 
if(c>d) {t=c;c=d;d=t;}
printf("按从小到大输出：");
printf("%d%d%d%d",a,b,c,d);
return 0;
}