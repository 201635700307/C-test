#include<stdio.h>
#include<math.h>
int main ()
{void o(float i,float j,float k);
 void p(float i,float j,float k);
 void q(float i,float j,float k);
	float a,b,c;
	printf("请输入二次函数对应的abc的值\n");
	printf("a=");
	scanf_s("%f",&a);
	printf("b=");
	scanf_s("%f",&b);
	printf("c=");
	scanf_s("%f",&c);
	if (b*b-4*a*c>0)
	{void o(a,b,c);}
	else if (b*b-4*a*c==0)
	{void p(a,b,c);}
	else 
	{void q(a,b,c);}
	return 0;
}

void o(float i,float j,float k)
{float x1,x2;
x1=(-j+sqrt(j*j-4*i*k))/(2*i);
x1=(-j-sqrt(j*j-4*i*k))/(2*i);
printf("方程有两个实根分别是x1=%7.2f x2=%7.2f",x1,x2);
}

 void p(float i,float j,float k)
 {float x1,x2;
 x1=(-j)/(2*i);
 x2=(-j)/(2*i);
 printf("方程有两个相同实根分别是x1=%7.2f x2=%7.2f",x1,x2);
 }

 void q(float i,float j,float k)
 {printf("方程没有实根");}
