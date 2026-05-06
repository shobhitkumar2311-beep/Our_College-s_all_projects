/*Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). */
/*
Formula: F = (9/5) * C + 32
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

