/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2 */

#include <stdio.h>

// Function to calculate force (F = m * g)
float calculateForce(float mass) 
{
    float g = 9.8; 
    return mass * g; // Calculate and return the force of attraction
}

int main() 
{
    float m;
    printf("Enter the mass of the body (in kg): ");
    scanf("%f", &m);

    printf("Force of attraction = %.2f N\n", calculateForce(m));    // Display the calculated force of attraction
    
    return 0;
}
