#include<stdio.h>
int main()
{
int m,i;
int a[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
printf("������һ����");
scanf("%d",&m);
if(m==a[7])
{printf("��m��λ����8");}
else if(m>a[7])
{for(i=7;i>=0;i--)
if(m==a[i])
{printf("��m��λ����%d",i+1);}}
else
{for(i=7;i<15;i++)
if(m==a[i])
{printf("��m��λ����%d",i+1);}}
return 0;
}