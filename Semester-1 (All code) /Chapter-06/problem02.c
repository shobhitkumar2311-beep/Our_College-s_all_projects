/* Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?*/

#include <stdio.h>

// Function that takes an integer pointer
void displayAddress(int *ptr) // ptr is a pointer to an integer, it holds the address of the variable passed from main
{
    printf("Address inside function: %p\n", (void*)ptr);    // Print the address stored in ptr (which is the address of i passed from main)
}

int main() {
    int i ;

    printf("Enter a number: ");
    scanf("%d", &i);

    // Print address of i in main
    printf("Address in main: %p\n", (void*)&i); //(void*)&i gets the address of variable i and prints it

    // Pass i to function
    displayAddress(&i);     // &i gets the address of variable i and passes it to the function displayAddress

    return 0;
}
