/* Write a function and pass the value by reference.*/

#include <stdio.h>

// Function that changes the value by reference
void updateValue(int *num) // num is a pointer to an integer, it holds the address of the variable passed from main
{
    *num = *num + 5; // add 5 to the original value
}

int main()
{
    int x = 10;

    printf("Original value of x: %d\n", x);

    // Pass address of x (reference)
    updateValue(&x);

    printf("Value of x after function call: %d\n", x);

    return 0;
}
