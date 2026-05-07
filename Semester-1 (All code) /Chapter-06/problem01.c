/* Write a program to print the address of a variable. Use this address to get the value of the variable */
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    int *ptr = &a;  // ptr holds the address of variable a

    printf("Address of a: %p\n", (void*)ptr); // Print the address stored in ptr (which is the address of a)
    printf("Value of a: %d\n", *ptr);  // *ptr gets the value at the address stored in ptr

    return 0;
}