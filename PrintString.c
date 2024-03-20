#include<stdio.h>

 int main(){
    char str[] = {'h','a','a','r','\0'};
    char*ptr = str;
    while(*ptr!= '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}