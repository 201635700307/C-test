#include<stdio.h>
int main ()
{ void exchange(int *q1,int *q2,int *q3);
int a,b,c,*p1,*p2,*p3;
printf("please intput three numbers\n");
printf("please intput the first numbers:");
scanf("%d",&a);
printf("please intput the second numbers:");
scanf("%d",&b);
printf("please intput the second numbers:");
scanf("%d",&c);
p1=&a;
p2=&b;
p3=&c;
exchange(p1,p2,p3);
printf("%d %d %d",a,b,c);
return 0;
}

 void exchange(int *q1,int *q2,int *q3)
 {void swap (int *qt1,int *qt2);
 if (*q1>*q2) swap ( *q1,*q2);
 if (*q1>*q3) swap ( *q1,*q3);
 if (*q2>*q3) swap ( *q3,*q2);
 }

 void swap (int *qt1,int *qt2)
 { int t;
 t=*qt1;
 *qt1=*qt2;
 *qt2=t;
 }