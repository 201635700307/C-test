#include <stdio.h>
int main ()
{float a;
	printf("please input your grade:");
	scanf("%f",&a);
	if(a>=90){
			printf("your grade rank is A");
	}
	else if(a>=80){
		printf("your grade rank is B");}	
			else if(a>=70){
		printf("your grade rank is C");}	
			else if(a>=60){
		printf("your grade rank is D");}	
		else{
		printf("your grade rank is E");	}
return 0;
}