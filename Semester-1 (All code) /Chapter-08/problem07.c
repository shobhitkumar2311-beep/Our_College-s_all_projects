/* Write a program to decrypt the string encrypted using encrypt function in problem 6 */

#include <stdio.h>

int main()
{
    char text[100]; // input string buffer
    int i;          // loop counter

    printf("Enter a string: "); // ask user for input
    scanf("%s", text);          // read input until newline

    for (i = 0; text[i] != '\0'; i++)
    {
        text[i] = text[i] - 1; // subtract 1 from ASCII value
    }

    printf("Decrypted string: %s\n", text); // show decrypted result
    return 0;                               // program ends here
}
