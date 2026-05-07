/* Write a recursive function to calculate the sum of first ‘n’ natural numbers. */

#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
    if (n == 0)
    {
        return 0; // Base case: the sum of the first 0 natural numbers is 0
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1); // Recursive call to sum the current number 'n' with the sum of the first 'n-1' natural numbers
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the sum of the first 'n' natural numbers
    printf("Sum of first %d natural numbers is: %d\n", n, sumOfNaturalNumbers(n));

    return 0;
}