/* Try problem 3 using call by value and verify that it does not change the value of the said variable. */

#include <stdio.h>

// Function to multiply value by 10 (call by value)
void makeTenTimes(int num)
{
    num = num * 10; // only changes local copy
    printf("Inside function (num): %d\n", num);
}

int main()
{
    int x; // original variable

    // Read value for x from user input
    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("Original value of x: %d\n", x);

    // Call function (pass by value)
    makeTenTimes(x);

    // Value of x remains unchanged
    printf("Value of x after function call: %d\n", x);

    return 0;
}
