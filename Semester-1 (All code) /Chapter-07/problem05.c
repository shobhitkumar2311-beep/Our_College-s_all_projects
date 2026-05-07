// /* Write a program containing a function which reverses the array passed to it. */
// #include <stdio.h>

// void reverseArray(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     while (start < end)
//     {
//         // Swap elements at start and end positions
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         // Move pointers towards each other
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     reverseArray(arr, size);

//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
#include <stdio.h>

// Ultra-short function to reverse an array
void reverse(int a[], int n)
{

    for (int i = 0, t; i < n / 2; i++)
    {
        t = a[i], a[i] = a[n - 1 - i], a[n - 1 - i] = t;    // Swap elements at positions i and n-1-i
    }

}
    int main()
{
    // Declare array and its size 'n' together
    int a[] = {1, 2, 3, 4, 5}, n = 5;

    reverse(a, n);

    // Print the reversed array on a single line
    for (int i = 0; i < n; i++) // Loop to print each element of the reversed array
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}