#include<stdio.h>
int sum(int n);

 int main(){
    int n;
    printf("enter the natural number for sum of natural number\n");
    scanf("%d",&n);
    printf("sum of natural number is :");
    int sumofnaturalnumber = sum(n);
    printf("%d",sumofnaturalnumber);



 
    return 0;
}

int sum(int n){
    if(n<=1)
    return n;
  return  n+sum(n-1);


} 