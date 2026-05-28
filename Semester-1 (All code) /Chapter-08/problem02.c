/* Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    gets(str1); // reads input including spaces until newline

    printf("Enter the second string: ");
    gets(str2); // reads input including spaces until newline

    if (strcmp(str1, str2) == 0)    // Compare the two strings using strcmp function, which returns 0 if the strings are equal
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}