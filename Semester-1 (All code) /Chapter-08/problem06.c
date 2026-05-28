/* Write a program to encrypt a string by adding 1 to the ascii value of its characters. */

#include <stdio.h>

int main()
{
    char text[100]; // input string buffer
    int i;          // loop counter

    printf("Enter a string: "); // ask user for input
    scanf("%s", text);          // read input until newline

    for (i = 0; text[i] != '\0'; i++)
    {
        text[i] = text[i] + 1; // add 1 to ASCII value
    }

    printf("Encrypted string: %s\n", text); // show encrypted result
    return 0;                               // program ends here
}
