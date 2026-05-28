/* Twenty integers are to be stored in memory. What will you prefer- Array or structure? */

#include <stdio.h>

int main()
{
    // Prefer an array because all twenty values are of the same type.
    int numbers[20];

    // Store twenty integer values in the array.
    for (int i = 0; i < 20; i++)
    {
        numbers[i] = i + 1;
    }

    // Print the stored values.
    printf("Stored twenty integers: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}


