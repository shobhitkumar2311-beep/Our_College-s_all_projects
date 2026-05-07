/*
Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;
*/
#include <stdio.h>
int main()
{
    int a = 1;
    int b = a;
    // This is valid in C. We can assign the value of one integer variable to another.
    int v = 3 * 3;
    // This is also valid in C. We can perform arithmetic operations and assign the result to an integer variable.
    char dt = '21 dec 2020';
    // This is invalid in C. A character literal should be enclosed in single quotes and contain only one character.

    /*The correct way to represent a string would be to use double quotes, like this: char dt[] = "21 dec 2020";
     */
    return 0;
}
