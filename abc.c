#include <stdio.h>
int main() {
int a,b,c,d;
printf("please input a three-digit interger:");
scanf("%d",&a);
b=a/100;
c=(a-b*100)/10;
d=a-b*100-c*10;
printf("the result is ");
printf("%d%d%d",d,c,b);
return 0;
}