#include <stdio.h>
#define PI 3.1415926
int main()
{
	int r;
	double area;
	printf("please input r=");
	scanf("%d",&r);
	area=PI*r*r;
	printf("PI=%lf",PI);
	printf("area=%lf",area);
	return 0;	
}