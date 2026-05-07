/* What can be done using one type of loop can also be done using the other two types of loops – true or false? */

#include <stdio.h>
int main()
{

    // Answer: TRUE (All loops are logically equivalent)

    // ---------------- FOR LOOP ----------------
    printf("Using for loop:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i); // prints 1 to 5
    }
    printf("\n\n");

    // ---------------- WHILE LOOP ----------------
    printf("Using while loop:\n");
    int j = 1;
    while (j <= 5)
    {
        printf("%d ", j); // prints 1 to 5
        j++;
    }
    printf("\n\n");

    // ---------------- DO-WHILE LOOP ----------------
    printf("Using do-while loop:\n");
    int k = 1;
    do
    {
        printf("%d ", k); // prints 1 to 5
        k++;
    } while (k <= 5);
    printf("\n\n");

    // Final Statement
    printf("Conclusion: TRUE - Any task done with one loop can be done with the other two.\n");

    return 0;
}
