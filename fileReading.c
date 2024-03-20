#include<stdio.h>

 int main(){
       
       FILE*ptr;
       int num;

       ptr = fopen("sample.txt","r");
       if(ptr == NULL){
        printf("this  file does not exist\n");
       }
    fscanf(ptr,"%d",&num);
    fclose(ptr); // used to free the resources

    printf("the value of is: %d ",num);
    return 0;
}