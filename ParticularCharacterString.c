#include<stdio.h>
#include<string.h>
int main(){
       char str [200]  = "madhavpathak";
       printf("enter the no you want to find the occurence\n");
       char ch;
       int length = strlen(str);

       scanf("%c",&ch);
       int count = 0;
       for(int i = 0;i<length-1;i++){
        if(str[i]== ch){
            count++;
            printf("your charcater is occured at index:%d\n",i);


        }
       }
       printf("your character is occcured %d times",count);
       return 0;
}