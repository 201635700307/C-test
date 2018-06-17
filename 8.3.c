#include <stdio.h>  
int  main()  
{  
    void input(int *);  
    void output(int *);  
    void process(int *);  
    int num[10];  
    input(num);  
    process(num);  
    output(num);  
  
}  
  
void input(int *num)  
{  
    int i;  
    printf("input ten integer:\n");  
    for (i=0;i<10;++i)  
    {  
        scanf("%d",&num[i]);  
    }  
}  
  
void process(int *num)  
{  
    int i,*min,*max,temp;  
    min=max=&num[0];  
  
    for (i=0;i<10;++i)  
    {  
        if (*min>num[i])  
            min = &num[i];  
        if(*max<num[i])  
            max= &num[i];  
    }  
    temp= num[0];num[0]=*min;*min= temp;  
    temp= num[9];num[9]=*max;*max= temp;  
}  
  
void output(int *num)  
{  
    int i;  
    printf("After Proceeding,these numbers are\n");  
    for (i=0;i<10;++i)  
    {     if(i==9)  
        printf("%d\n",num[i]);  
          else  
        printf("%d ",num[i]);  
    }  
}  