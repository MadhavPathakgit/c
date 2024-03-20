#include<stdio.h>
int count(int*arr,int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;

}

  int main(){
//     int mul[10];
//     for(int i =0;i<10;i++){
//         mul[i] = 5*(i+1);
//     }
//     for(int i = 0;i<10;i++){
//         printf("%d\n",mul[i]);
//     }
    int arr [8]= {-1,-2,-3,-4,-5,-6,-7};
  int Count =   count(arr,8);
  printf("the no of positive integer in array are :%d ",Count);
    return 0;
}