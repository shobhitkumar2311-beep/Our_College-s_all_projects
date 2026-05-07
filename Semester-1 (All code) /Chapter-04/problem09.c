/* Repeat 8 using while loop. */

#include <stdio.h>
int main() 
{
    int counter = 1; // Initialize counter to 1
    int n;
    printf("Enter the number of times to repeat 8: ");
    scanf("%d", &n); // Read the number of times to repeat 8 from user input
    while (counter <= n)
    {
        printf("8\n");
        counter++;  // Increment the counter to avoid infinite loop
    }
    return 0;
}