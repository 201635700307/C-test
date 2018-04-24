#include <stdio.h>
int main ()
{
	int a,b,c,s;
	 printf ("所有的水仙花数如下：\n");
	for (a=1;a<10;a++)
	{ for (b=0;b<10;b++)
	  {for (c=0;c<10;c++)
	    {
			s=a*100+b*10+c;
	     if( s==(a*a*a+b*b*b+c*c*c))
	         printf("%d\n",s);
	    }
	   }
	 }
	return 0;
}

