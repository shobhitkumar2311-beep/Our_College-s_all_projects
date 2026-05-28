/* Write a program to count the occurrence of a given character in a string. */
#include <stdio.h>

int main()
{
    char text[100]; // input string buffer
    char ch;        // character to count
    int count = 0;  // counter for occurrences
    int i;          // loop counter

    printf("Enter a string: "); // ask user for input
    scanf("%s", text);          // read input until newline

    printf("Enter a character to count: "); // ask user for character
    scanf(" %c", &ch);                      // read single character

    for (i = 0; text[i] != '\0'; i++) // loop through each character in the string until null terminator
    {
        if (text[i] == ch) // check if current character matches the one we're counting
        {
            count++; // increment count if character matches
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}