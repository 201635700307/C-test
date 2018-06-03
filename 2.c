# include<stdio.h>
int main()
{
int i,j,min,temp,a[10];
for (i=0;i<10;i++)
{
printf("please enter the %d numbers:\n",i+1);
scanf("%d",&a[i]); 
printf("\n");
}
printf("\n");
printf("The orginal numbers:\n");
for (i=0;i<10;i++) 
printf("%5d",a[i]); 
printf("\n"); 
for (i=0;i<10;i++)
{min=i;
for(j=i+1;j<10;j++)
if (a[min]>a[j]) min=j;
temp=a[i]; 
a[i]=a[min];
a[min]=temp;
}
printf("\n The sorted numbers:\n"); 
for(i=0;i<10;i++)
printf("%5d",a[i]);
printf("\n");
return 0;
}