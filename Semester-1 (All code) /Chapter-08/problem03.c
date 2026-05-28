/* Write your own version of strlen function from <string.h> */

#include <stdio.h>

int my_strlen(char *str) // Function to calculate the length of a string
{
    int len = 0;
    while (str[len]) // Loop through the string until the null terminator is reached
        len++;

    return len; // Return the calculated length of the string
}

int main()
{
    char str[100];
    // Ask user for input
    printf("Enter string: "); // Read a string from the user, including spaces until newline
    gets(str);

    // Call the my_strlen function and print the length of the string
    printf("Length: %d\n", my_strlen(str));
    return 0;
}