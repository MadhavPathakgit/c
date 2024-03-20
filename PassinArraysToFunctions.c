#include<stdio.h>
// void printarray(int * ptr , int n){
// for(int i =0;i<n;i++){
//     printf("the value of elment is %d is %d\n",i+1,*(ptr+i) );

// }
// }
void printarray(int ptr[] , int n){
for(int i =0;i<n;i++){
    printf("the value of elment is %d is %d\n",i+1,ptr[i] );

}
ptr[2] = 555; // the value will be changed in main as well.


}

 int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9};
     printarray(arr,9);
    return 0;
}