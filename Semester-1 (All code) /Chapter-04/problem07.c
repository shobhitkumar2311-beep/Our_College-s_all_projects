/*  Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10). */

#include <stdio.h>
int main()
{
    int sum = 0;

    // starting the for loop to calculate the sum of the numbers in the multiplication table of 8
    for (int i = 1; i <= 10; i++)
    {
        sum += 8 * i; // adding the product of 8 and i to sum
    }
    // show the final result
    printf("The sum of the numbers in the multiplication table of 8 is: %d\n", sum);

    return 0;
}