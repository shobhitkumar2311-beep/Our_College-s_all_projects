/* Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.*/

#include <stdio.h>
#include <string.h>

// Function to slice string from m to n
void slice(char *str, int m, int n)
{
    int i = 0;
    while (m + i <= n && str[m + i] != '\0')
    {
        str[i] = str[m + i]; // copy characters from m..n
        i++;
    }
    str[i] = '\0'; // end the new string
}

int main()
{
    char str[100];
    int m, n;

    printf("Enter a string: ");
    scanf("%s", str); // input string (single word)

    printf("Enter start (m) and end (n) positions: ");
    scanf("%d %d", &m, &n);

    slice(str, m, n); // call slice function

    printf("Sliced string: %s\n", str);

    return 0;
}
