#include<stdio.h>
void reverse(int*arr,int n){
    int temp ;
    for(int i = 0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

}

 int main(){
    int arr[5] = {1,2,3,4,5};
 reverse(arr,5);
 for(int i = 0;i<5;i++){
    printf("%d",arr[i]);  
 }
    return 0;
}