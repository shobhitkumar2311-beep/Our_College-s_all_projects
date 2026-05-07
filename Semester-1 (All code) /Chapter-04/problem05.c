/* Write a program to sum first ten natural numbers using while loop. */

#include <stdio.h>
int main()
{
    int i = 1;
    // variable to store the sum of first ten natural numbers
    int sum = 0; 

    // starting the while loop to calculate the sum of first ten natural numbers

    while (i <= 10) //while show the last value of i is less than or equal to 10
    {
        sum += i; // adding the current value of i to sum
        i++; // incrementing i by 1
    }
    printf("Sum of first ten natural numbers is: %d\n", sum);

    return 0;
}