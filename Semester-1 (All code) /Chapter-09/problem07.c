/*  Write a program 5's structure using 'typedef' keyword's.*/

#include <stdio.h>

// Typedef for complex structure
typedef struct Complex
{
    float real, imag; // real and imaginary parts

} Complex; // define Complex as an alias for struct Complex

int main()
{
    Complex c1 = {2.0, 4.5}; // use typedef name to declare and initialize complex number

    printf("Complex: %.1f real number+ %.1fi imaginary number\n", c1.real, c1.imag);

    return 0;
}
