/* Write a program to dynamically create an array of size 6 capable of storing 6 integers*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;                            // size of the array
    int *arr;                             // pointer for array
    arr = (int *)malloc(n * sizeof(int)); // allocate memory for 6 integers
    arr[0] = 10;                          // assign values to the array
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    printf("The elements of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The size of the array is: %d\n", n);
    printf("The array is stored at address: %p\n", (void *)arr);
    free(arr); // free memory
    return 0;
}
