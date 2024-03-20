#include<stdio.h>
#define MAX_LIMIt 20

 int main(){
    char s[MAX_LIMIt];
    printf("enter your name:\t");
    // scanf("%s",s); // alternate
    // gets(s);// alternate
    // as gets() doesn’t do any array bound testing. gets() keeps 
    // on reading until it sees a newline character. 
// To avoid Buffer Overflow, fgets() should be used instead of gets() as fgets() 
// makes sure that not more than MAX_LIMIT characters are read.
fgets(s,MAX_LIMIt,stdin);
// The fgets() function returns a pointer to the string where the input is stored.
// It is safe to use because it checks the array bound.   


    // printf("%s",s);
    puts(s);
    return 0;
}