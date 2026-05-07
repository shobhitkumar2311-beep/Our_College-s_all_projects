/* Write a program to calculate the factorial of a given number using a for loop. */

#include <stdio.h>
int main() {
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial using a for loop
    for (int i = 1; i <= n; i++) 
    {
        factorial *= i;     // multiplying factorial by i in each iteration
    }

    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}