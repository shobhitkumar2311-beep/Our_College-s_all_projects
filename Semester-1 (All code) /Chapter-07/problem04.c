/* Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>

int main()
{
    int table[10]; // Array of 10 integers
    int num;       // Number entered by the user

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store multiplication table of the entered number
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }

    // Print the table
    printf("Multiplication table of %d:\n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }

    return 0;
}
