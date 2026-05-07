/* Write a program containing functions which counts the number of positive integers in an array. */
#include <stdio.h>

int countPositive(int arr[], int size) // Function to count the number of positive integers in the array
{
    int count = 0;
    for (int i = 0; i < size; i++) // Loop through each element of the array
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, -6, 7, 8, -9, 10, -11, -12, 13}; // Declare and initialize the array with some positive and negative integers
    int size = sizeof(arr) / sizeof(arr[0]);                       // Calculate the size of the array (sizeof mean is total size of the array in bytes, sizeof(arr[0]) is the size of one element in bytes)

    int positiveCount = countPositive(arr, size); // Call the function to count positive integers and store the result in positiveCount

    printf("Number of positive integers in the array: %d\n", positiveCount);

    return 0;
}