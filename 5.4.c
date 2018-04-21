#include<stdio.h>
int  main()
{
int z,k,s,q;
char ch;
z=k=s=q=0; 
for(ch=getchar();ch!='\n';)
{
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
z++;
else if(ch==' ')
k++;
else if(ch>='0'&&ch<='9')
s++;
else q++;
ch=getchar();
}
printf("字母个数:%d\n空格个数:%d\n数字个数:%d\n其他字符个数:%d\n",z,k,s,q); 
return 0;
} 