/* Write a program to check whether a given character is present in a string or not. */

#include <stdio.h>

int main()
{
    char text[100]; // input string (single word)
    char ch;        // character to search for
    int i;          // loop index
    int found = 0;  // flag

    printf("Enter a string: ");
    scanf("%s", text); // read string

    printf("Enter a character to search for: ");
    scanf(" %c", &ch); // read single character (skip whitespace)

    for (i = 0; text[i] != '\0'; i++) // loop through string until null terminator
    {
        if (text[i] == ch)
        {
            found = 1; // mark found
            break;     // stop searching
        }
    }

    if (found) // check flag and print result
        printf("The character '%c' is present in the string.\n", ch);
    else // if not found, print not present message
        printf("The character '%c' is not present in the string.\n", ch);

    return 0;
}
