/*  Write a program to determine whether a character entered by the user is lowercase or not. */
#include <stdio.h>
int main()
{
    char ch;
    //Enter a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    // Check if the character is between 'a' and 'z'
    {
        printf("The character is lowercase.\n");
    }
    // If the character is not in the range of lowercase letters
    else
    {
        printf("The character is not lowercase.\n");
    }

    return 0;
}