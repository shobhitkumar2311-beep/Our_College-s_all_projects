/* Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().*/

#include <stdio.h>

// Function to calculate sum and average
void calculateSumAndAverage(int a, int b, int *sum, double *average)
{
    *sum = a + b;            // store sum in the variable pointed by sum
    *average = (*sum) / 2.0; // store average in the variable pointed by average
}

int main()
{
    int x, y, sum;
    double average;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call function (pass addresses of sum and average)
    calculateSumAndAverage(x, y, &sum, &average);

    // Output results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
