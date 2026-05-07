/*  Write a program using function to find average of three numbers. */

#include <stdio.h>

float avg(int a, int b, int c)  // Function to calculate average of three numbers
{ 
    return (a + b + c) / 3.0; 
}

int main() 
{
    int x, y, z;

// Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    
    // Direct call inside printf to save a variable
    printf("Average = %.2f\n", avg(x, y, z));
    return 0;
}
