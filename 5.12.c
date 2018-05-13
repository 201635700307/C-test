#include<stdio.h>  
int main()  
{  
    int x=1,i;  
    for (i=1;i<=10;i++)  
    {  
        x=(x+1)*2;  
    }  
    printf("猴子第一天摘了%d个桃子\n",x); 
    return 0;  
}