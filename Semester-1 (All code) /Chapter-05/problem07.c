/* Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *       */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
