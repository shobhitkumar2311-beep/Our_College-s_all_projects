/* Write a program to print multiplication table of a given number n. */
#include <stdio.h>

int main()
{
    int n, i;

    // Enter the input by the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Starting the multiplication table
    for (i = 1; i <= 10; i++)

    // Print the multiplication table
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}