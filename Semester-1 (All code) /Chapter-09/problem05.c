/* Write a program with a structure representing a complex number.*/

#include <stdio.h>

// Structure for complex number
struct Complex
{
    float real, imagenary; // real and imaginary parts
};

int main()
{
    struct Complex c1 = {3.5, 2.5}; // initialize complex number

    printf("Complex: %.1f real number + %.1fi imaginary number \n", c1.real, c1.imagenary); // display complex number

    return 0;
}
