/*Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height. */

#include <stdio.h>
#define PI 3.14159   // constant value for pi (π) or(22/7 = 3.14159)

int main() {
    float radius, height, areaCircle, volumeCylinder; // In this row the float datatype is define the decimal value.

    // Input radius of the circle
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculate area of circle by the formula A = πr^2
    areaCircle = PI * radius * radius;
    printf("Area of Circle = %.2f\n", areaCircle);

    // Input height for cylinder
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume of cylinder by the formula V = πr^2h
    volumeCylinder = PI * radius * radius * height;
    printf("Volume of Cylinder = %.2f\n", volumeCylinder);

    return 0;
}
