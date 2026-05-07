/* Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. */

#include <stdio.h>
int main()
{
    //------- Using for loop -------

    int sum_for = 0; // variable to store the sum of first ten natural numbers 

    for (int i = 1; i <= 10; i++) // for loop to iterate from 1 to 10
    {
        sum_for += i; // adding the current value of i to sum_for
    }
    printf("Sum of first ten natural numbers using for loop is: %d\n", sum_for);

    //------- Using do-while loop -------

    int sum_do_while = 0; // variable to store the sum of first ten natural numbers 
    
    int j = 1; // initializing j to 1 for do-while loop
    do
    {
        sum_do_while += j; // adding the current value of j to sum_do_while
        j++; // incrementing j by 1
    } 
    while (j <= 10); // condition to continue the loop until j is less than or equal to 10

    printf("Sum of first ten natural numbers using do-while loop is: %d\n", sum_do_while);

    return 0;
}   