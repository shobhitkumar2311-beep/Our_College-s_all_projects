/* Write a program to check whether a number is divisible by 97 or not. */
#include <stdio.h>
int main()
{
    int number;

    //Enter the input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    //The if–else statement in C checks a condition; executes one block if true, otherwise executes the alternative block.
    if (number % 97 == 0)
    {
        printf("The number is divisible by 97.\n");
    }
    else
    {
        printf("The number is not divisible by 97.\n");
    }

    return 0;
}

/* Example Output:
A -> Enter a number: 5432
The number is divisible by 97.

B -> Enter a number: 100
The number is not divisible by 97.
*/