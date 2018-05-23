#include<stdio.h>
void main(){
void reverse(char string[50],int n)£»
char string[50];
int strLength;
gets(string);
strLength = strlen(string);

reverse(string,strLength-1);


return 0;
}

void reverse(char string[50],int n){
    int newString[50] ,i,j;
    for(i=n,j=0;i>=0;i--,j++){
        newString[j] = string[i];
    }

    for(i=0;i<=n;i++){
        printf("%c",newString[i]);
    }


}