/*  Implement 10 using other types of loops.*/

#include <stdio.h>

int main()
{
    // Implementing 10 using different loops
    // Goal: Print the number 10 five times

    // -------- FOR LOOP --------
    printf("Using for loop:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("10\n"); // prints 10
    }

    // -------- WHILE LOOP --------
    printf("\nUsing while loop:\n");
    int j = 1;
    while (j <= 5)
    {
        printf("10\n"); // prints 10
        j++;
    }

    // -------- DO-WHILE LOOP --------
    printf("\nUsing do-while loop:\n");
    int k = 1;
    do
    {
        printf("10\n"); // prints 10
        k++;
    } while (k <= 5);

    return 0;
}
