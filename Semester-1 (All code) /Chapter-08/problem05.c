/* Write your own version of strcpy function from <string.h> */

#include <stdio.h>
#include <string.h>

// Custom strcpy function
char *my_strcpy(char *dest, const char *src)
{
    char *ret = dest; // keep starting address
    while (*src)      // copy until null terminator

    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // end string
    return ret;   // return destination pointer
}

int main()
{
    char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%s", source); // input string (single word)

    my_strcpy(destination, source); // use our own strcpy

    printf("Copied string: %s\n", destination);

    return 0;
}
