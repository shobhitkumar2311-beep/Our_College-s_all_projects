/* Write a program using recursion to calculate nth element of Fibonacci series. */

#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base case: returns 0 for 0 and 1 for 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);

    // Display the nth Fibonacci number
    printf("The %dth element is: %d\n", n, fibonacci(n));
    return 0;
}
