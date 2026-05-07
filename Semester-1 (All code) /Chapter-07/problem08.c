/* Repeat problem 7 for a custom input given by the user.*/

#include <stdio.h>
int main()
{
    int tables[3][10]; // 2D array to store multiplication tables
    int nums[3];       // Array to store the numbers for which tables will be generated

    // Ask user for input
    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &nums[i]); // Read each number into the nums array
    }

    // Generate multiplication tables for the entered numbers
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 10; j++)
            tables[i][j] = nums[i] * (j + 1); // Calculate and store the multiplication values

    // Print the multiplication tables
    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d:\n", nums[i]);
        for (int j = 0; j < 10; j++)
            printf("%d x %d = %d\n", nums[i], j + 1, tables[i][j]); // Print each multiplication result
        printf("\n");
    }
    return 0;
}