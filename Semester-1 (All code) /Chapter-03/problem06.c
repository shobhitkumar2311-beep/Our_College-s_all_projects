/*  Write a program to find greatest of four numbers entered by the user. */

#include <stdio.h>
int main()
{
    float num1, num2, num3, num4, greatest;

    // Input four numbers from user
    printf("Enter four numbers: \n");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    // Assume the first number is the greatest
    greatest = num1;

    // Compare with the second number
    if (num2 > greatest)
    {
        greatest = num2;
    }
    // Compare with the third number
    if (num3 > greatest)
    {
        greatest = num3;
    }
    // Compare with the fourth number
    if (num4 > greatest)
    {
        greatest = num4;
    }

    // Output the greatest number
    printf("The greatest number is: %.2f\n", greatest);

    return 0;
}