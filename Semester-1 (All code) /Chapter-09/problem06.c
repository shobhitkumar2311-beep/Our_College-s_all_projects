/* Create an array of 5 complex numbers created in problem 5 and display them with the help of  a display function. The values must be taken as an input from the user. */

#include <stdio.h>

// Structure for complex number
struct Complex
{
    float real, imag;
};

// Function to display complex number
void display(struct Complex c)
{
    printf("%.1f + %.1fi\n", c.real, c.imag);
}

int main()
{
    struct Complex arr[5]; // array of 5 complex numbers
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter real & imag: ");
        scanf("%f %f", &arr[i].real, &arr[i].imag); // input values for each complex number
    }
    for (int i = 0; i < 5; i++)
        display(arr[i]); // display all complex numbers using display function
    return 0;
}
