/* Which of the following is used to appropriately read a multi-word string. 
1. gets() 
2. puts() 
3. printf() 
4. scanf() */

#include <stdio.h>

int main() {
    char str[100];  // buffer to store string

    printf("Enter a multi-word string: ");
    gets(str);  // reads input including spaces until newline

    printf("You entered: %s\n", str);

    return 0;
}
