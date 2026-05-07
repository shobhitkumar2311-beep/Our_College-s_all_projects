/* Write a program to create an array of 10 integers and store multiplication table of 5 in it. */

#include <stdio.h>

int main()
{
    int table[10]; // Array of 10 integers

    // Store multiplication table of 5
    for (int i = 0; i < 10; i++)
    // Loop to calculate and store the multiplication values in the array
    {
        // Calculate the multiplication value and store it in the array
        table[i] = 5 * (i + 1);
    }

    // Print the table
    printf("Multiplication table of 5:\n");

    // Print each element of the table
    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", i + 1, table[i]);
    }

    return 0;
}
