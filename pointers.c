#include<stdio.h>

 int main(){
    int i = 10;
    int*j = &i;
    printf("the value of i is :%d\n",i);
    printf("the value of i  is: %d\n",*j);
    printf("the adress of  i is :%u\n",&i);
    printf("the adress of i  is: %u\n",j);
    printf("the adress of j  is: %u\n",&j);
    printf("the value of j is: %d\n",*(&j));
    

        return 0;
}