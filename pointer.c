#include <stdio.h>
int main()
{
    int n = 4;
    int arr[n];
    int *ptr = arr;
    printf("enter the no elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("The array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}