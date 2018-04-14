#include <stdio.h>
#include <math.h>
int main ()
{float x,y;
printf("please input your porfit:");
scanf("%f",&x);
if(x<=100000)
{y=x*0.1;}
else if (x<=200000)
{y=10000+(x-100000)*0.075;}
else if (x<=400000)
{y=17500+(x-200000)*0.05;}
else if (x<=600000)
{y=27500+(x-400000)*0.03;}
else if (x<=1000000)
{y=33500+(x-600000)*0.015;}
else
{y=39500+(x-1000000)*0.01;}
printf("the allowance is %f",y);
return 0;
}