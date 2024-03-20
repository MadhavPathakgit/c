#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "madamerry";

    int length = strlen(str);
    int count =0;
    for(int i = 0;i<length/2;i++){
        if(str[i]!= str[length-1-i]){
            count++;
        }
    
    }
        if(count==0){
            printf("this is palindrome");
        }
        else{
printf("this is not palidrome");
        }
}