#include <stdio.h>
void swap (char *qt1,char *qt2)
 { char t;
 t=*qt1;
 *qt1=*qt2;
 *qt2=t;
 }
void  strcmp(char *str1, char *str2 ,char *str3)
{ 
while( *str1== *str2 && *str1!='\0')
{ str1++; str2++;}
   if ( *str1-*str2 >0 )  swap ( *str1,*str2);
while( *str1== *str3 && *str1!='\0')
{ str1++; str3++;}
   if ( *str1-*str3 >0 )  swap ( *str1,*str3);
while( *str2== *str3 && *str2!='\0')
{ str2++; str3++;}
   if ( *str2-*str3 >0 )  swap ( *str2,*str3);
}
  void  main( )
{ char  *str1, *str2,*str3;  
  char a[10],b[10],c[10];
  printf("please intput the first chars:");
scanf("%s",a);
printf("please intput the second chars:");
scanf("%s",b);
printf("please intput the second chars:");
scanf("%s",c);
str1=&a[0];
str2=&b[0];
str3=&c[0];
 strcmp( str1, str2 ,str3) ;
 printf("%s %s %s",a,b,c) ; 
}

