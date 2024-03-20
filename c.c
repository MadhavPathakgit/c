#include<stdio.h>

 int main(){
    int arr[] = {1,2,3,4,5};

    // int x = 10;
    int*ptr = arr+3;
    // printf("%d",(ptr[2]));
    printf("%d",ptr[-1]);

    return 0;
}