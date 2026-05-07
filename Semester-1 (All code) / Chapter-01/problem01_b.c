/*Write a C program to calculate area of a rectangle: 
b. Using inputs supplied by the user. */

#include <stdio.h>

int main() {
    int length, width, area;  // In this row is declared three variables: length, width, and area

    printf("Enter the length of the rectangle: ");
    // Enter the value of the length of the reactangle 
    scanf("%d", &length);
    
    printf("Enter the width of the rectangle: ");
    // Enter the value of the width of the reactangle 
    scanf("%d", &width);

    area = length * width;

    printf("Length = %d, Width = %d\n", length, width);
    printf("Area of Rectangle = %d\n", area);

    return 0;
}
