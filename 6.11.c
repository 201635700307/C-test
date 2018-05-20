#include <stdio.h>
int main ()
{ int i,j;
char a[]={'*','*','*','*','*'};
char space=' ';
for (i=0;i<5;i++)
{for(j=1;j<=2*i;j++)
printf("%c",space);
for (j=0;j<5;j++)
printf("%2c",a[i]);
printf("\n");}
return 0;
}