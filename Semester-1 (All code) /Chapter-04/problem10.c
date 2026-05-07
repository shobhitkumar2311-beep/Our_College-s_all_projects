/* Write a program to check whether a given number is prime or not using loops. */

#include <stdio.h>
int main()
{
    int num, i = 2, flag = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime number check using while loop
    // A prime number is greater than 1 and divisible only by 1 and itself
    if (num <= 1)
    {
        printf("%d is NOT a prime number.\n", num);
    }
    else
    {
        while (i <= num / 2)
        { // check divisibility up to half of num
            if (num % i == 0)
            {             // if divisible by i
                flag = 1; // set flag to true
                break;    // exit loop early
            }
            i++; // increment i
        }

        // Print result based on flag
        if (flag == 0)
            printf("%d is a PRIME number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
