#include<stdio.h>
int main ()
{void a(char x[200]);
char string[200];
gets_s(string);
a(string);
return 0;
}

void a(char x[200])
{int num1=0,num2=0,num3=0,num4=0,i;
i=0;
while(x[i]!='\0')
{if(x[i]>='a'&&x[i]<='z' || x[i]>='A'&&x[i]<='Z')
{num1=num1+1;}
else if(x[i]>='0'&&x[i]<='9')
{num2=num2+1;}
else if(x[i]=' ')
{num3=num3+1;}
else
{num4=num4+1;}
i++;
}
printf("%d %d %d %d",num1.num2,num3,num4);
}
