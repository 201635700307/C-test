#include <stdio.h>
int main () 
{
	int a,b,s;
	for(a=2;a<=1000;a++)
	{
		s=1;
		for (b=2;b<=a/2;b++)
	    {if (a%b==0)
		s=s+b;}
		if (s==a)
		{printf ("%d its factors are ",a);
		 for (b=2;b<=a/2;b++)
		if (a%b==0)
		 printf ("%d,",b);
		 printf ("\n");
	}
	}
	return 0;
}