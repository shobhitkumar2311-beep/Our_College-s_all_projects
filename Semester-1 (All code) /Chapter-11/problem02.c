/* Use the array in problem 1 to store 6 integers entered by the user.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *arr;
    arr = (int *)malloc(n * sizeof(int)); // allocate memory for 6 integers

    printf("Enter 6 integers:\n"); // input the values from the user
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
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
