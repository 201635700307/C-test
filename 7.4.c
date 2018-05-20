#include <stdio.h>
int main ()
{ void q(int x[3][3]);
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 q(a);
return 0;
}
 void q(int x[3][3])
{	int i,j,y[3][3];
 for (i=0;i<3;i++)
	{for(j=0;j<3;j++)
 {y[j][i]=x[i][j];}}
for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
	printf("%5d",y[i][j]);
printf("\n");}
}



