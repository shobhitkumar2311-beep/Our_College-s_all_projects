/* Write a program to change the value of a variable to ten times of its current value.*/

#include <stdio.h>

// Function to multiply the value by 10
void makeTenTimes(int *num) // num is a pointer to an integer, it holds the address of the variable passed from main
{
    *num = (*num) * 10; // takes the value stored at the memory address num points to, multiplies it by 10, and writes the new result back into that same memory location.
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Print the original value of x
    printf("Original value: %d\n", x);

    // Pass address of x to function
    makeTenTimes(&x);

    printf("Value after making it 10 times: %d\n", x);

    return 0;
}
