#include <stdio.h>
int main ()
{ int a,b,c,d,t;
printf ("������һ����λ��\n");
printf ("�������һλ����");
scanf_s("%d",&a);
printf ("������ڶ�λ����");
scanf_s("%d",&b);
printf ("���������λ����");
scanf_s("%d",&c);
printf ("���������λ����");
scanf_s("%d",&d);
if(a>b) {t=a;a=b;b=t;}
if(a>c) {t=a;a=c;c=t;} 
if(a>d) {t=a;a=d;d=t;} 
if(b>c) {t=b;b=c;c=t;} 
if(b>d) {t=b;b=d;d=t;} 
if(c>d) {t=c;c=d;d=t;}
printf("����С���������");
printf("%d%d%d%d",a,b,c,d);
return 0;
}