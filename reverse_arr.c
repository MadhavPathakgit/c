#include<stdio.h>
int main() {

    int array[10] = {1,3,4,5,6,7,7,8,9,5};
    // int rev_arr[10];
    // int e = 9;
    // for(int i=0;i<10;i++) {
    //     rev_arr[i] = arr[e];
    //     e--;
    // }
    // for(int i = 0; i<10; i++) {
    //     printf("%d, " , rev_arr[i]);
    // }
    // return 0;
    int start = 0 ;
        int end = 9;
        int temp ;
        for(int i = 0;i< 10/2;i++){
            temp = array[ start ];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }

        for(int i = 0;i<10;i++){
            printf("%d ",array[i]);

        }
}