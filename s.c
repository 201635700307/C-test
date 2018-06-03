#include<stdio.h>
int  i=2, j=3;
int  f ( int  x )
{    static int k=2;
k+=x+i;   x++;
return  k;
}
void  main( )
{    int  i;
i=f(2);   j=f(4);
printf("%d\n", i+j );
}
