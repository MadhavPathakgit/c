#include<stdio.h>
#include<stdlib.h>

 int main(){
    int* ptr ;
ptr = (int*)calloc(6 , sizeof(int));
if(ptr== NULL){
    printf("the memory is not allocated");
}
for(int i= 0;i<6;i++){
    printf("enter the value of %d element:\n", i);
    scanf("%d",&ptr[i]);
    
}
for(int i= 0;i<6;i++){
    printf("The value of %d element is %d:\n", i,ptr[i]);
  
}

    return 0;
}