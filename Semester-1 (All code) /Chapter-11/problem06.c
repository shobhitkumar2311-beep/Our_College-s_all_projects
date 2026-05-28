/* Attempt problem 4 using calloc.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    arr = (int *)calloc(5, sizeof(int)); // allocate and initialize 5 integers to 0

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // expand memory to store 10 integers
    arr = (int *)realloc(arr, 10 * sizeof(int));

    printf("Enter 5 another more integers for soting in the array:\n");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
