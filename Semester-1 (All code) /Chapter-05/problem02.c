/* Write a function to convert Celsius temperature into Fahrenheit. */

#include <stdio.h>
// Function to convert Celsius to Fahrenheit
float celsius_To_Fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
int main()
{
    float celsius;
    // Prompt the user to enter temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    // Display the result
    printf("Temperature in Fahrenheit: %.2f\n", celsius_To_Fahrenheit(celsius));

    return 0;
}
