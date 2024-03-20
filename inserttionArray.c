#include<stdio.h>
void display(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}
int Indinsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1; 
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]= arr[i];
    }
    arr[index]= element;
    return 1;
}void IndDeletion(int arr[],int size,int index){
    
    for(int i= index;i<size-1;i++){
        arr[i]= arr[i+1];
    }
}
 int main(){
    int arr[100]= {7,8,12,27,88};
    int size = 5;
    display(arr,size);
    int element = 45; 
    int index = 3;
    IndDeletion(arr,size,index);
    // Indinsertion(arr,size,element,100,index);
    //  size +=1;
    size -= 1;
    display(arr,size);

    return 0;
}
