#include<stdio.h>
#include<string.h>
int main(){


 char str[10] = "madhav";
//  printf("enter you string");
//  scanf("%s",&str);
//  printf("your string is:%s",str);
int length = strlen(str);

for(int i = 0,j= length-1;i<j;i++,j--){
    char c = str[i];
    str[i] = str[j];
    str[j]= c;

}
printf("the reversed string is %s",str);

}