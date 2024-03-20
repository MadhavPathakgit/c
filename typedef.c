#include<stdio.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];

}emp;
 int main(){
    emp e1 ;
    e1.code=100;
    printf("%d",e1.code);
    
    return 0;
}