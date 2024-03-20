#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};
 int main(){
    struct employee  madhav = {22,5646,"madhav"};
 printf("%s",madhav.name);
    // facebook[0].code = 100;
  
    
    return 0;
}