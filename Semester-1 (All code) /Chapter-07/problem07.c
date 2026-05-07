/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively. */

#include <stdio.h>
int main()
{
    int tables[3][10];
    int nums[] = {2, 7, 9};

    for (int i = 0; i < 3; i++) //  Loop through each number in the nums array

        for (int j = 0; j < 10; j++) // Loop through numbers 1 to 10 to calculate the multiplication table for each number in nums

            tables[i][j] = nums[i] * (j + 1); // Calculate the multiplication value and store it in the tables array

    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d:\n", nums[i]);

        for (int j = 0; j < 10; j++) //  Loop through the tables array to print the multiplication table for each number in nums

            printf("%d x %d = %d\n", nums[i], j + 1, tables[i][j]);

        printf("\n");
    }
    return 0;
}