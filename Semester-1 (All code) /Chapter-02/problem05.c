/*
3.0 + 1 will be:
a. Integer.
b. Floating point number.
c. Character. */
#include <stdio.h>

int main()
{
    float result = 3.0 + 1;
    printf("Result = %.2f\n", result);
    // prints Result = 4.00
    return 0;
}
// In C, arithmetic between float (3.0) and int (1) promotes int to float.
// Result is a floating-point number (4.0).
