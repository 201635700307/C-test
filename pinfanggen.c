#include <stdio.h>
#include <math.h>
int main()
{ float a;
  float b;
  printf("please input a number smaller than 1000\n");
  scanf_s("%f",&a);
  if (a>=1000)
  {
	  printf ("please input another number smaller than 1000\n");
      scanf_s("%f",&a);
  }
  else{
	  b=sqrt(a);
	  printf("%7.0f",b);}
  return 0;
}



