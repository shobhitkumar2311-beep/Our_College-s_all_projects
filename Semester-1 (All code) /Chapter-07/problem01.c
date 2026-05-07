/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.*/

#include <stdio.h>

int main()
{
    int arr[10];    // Create an array of 10 integers
    int *ptr = arr; // Pointer pointing to the first element of the array

    // Initialize array with values 1 to 10
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    // Print the first element using ptr
    printf("First element: %d\n", *ptr);

    // Print the third element using (ptr+2)
    printf("Third element using (ptr+2): %d\n", *(ptr + 2));

    // Verify by directly accessing arr[2]
    printf("Third element using arr[2]: %d\n", arr[2]);

    return 0;
}
