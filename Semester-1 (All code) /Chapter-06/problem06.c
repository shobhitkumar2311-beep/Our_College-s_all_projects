/* Write a program to print the value of a variable i by using “pointer to pointer” type of variable. */

#include <stdio.h>
int main()
{
    int i;             // normal integer variable
    int *ptr = &i;     // pointer to i (stores address of i)
    int **pptr = &ptr; // pointer to pointer (stores address of ptr)

    // Read value for i from user input
    printf("Enter a value for i: ");
    scanf("%d", &i);

    // Print value of i directly
    printf("Value of i: %d\n", i);

    // Print value of i using single pointer
    printf("Value of i using *ptr: %d\n", *ptr);

    // Print value of i using pointer to pointer
    printf("Value of i using **pptr: %d\n", **pptr);

    return 0;
}
