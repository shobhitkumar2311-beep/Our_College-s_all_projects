/* Write a program to print multiplication table of 10 in reversed order. */
#include <stdio.h>

int main()
{
    int i;

    // Print the multiplication table of 10 in reversed order
    for (i = 10; i >= 1; i--)

    //Starting the multiplication table
    {
        printf("10 * %d = %d\n", i, 10 * i);
    }

    return 0;
}