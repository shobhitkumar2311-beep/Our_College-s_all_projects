/*Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. */

#include <stdio.h>

int main() {
    int length = 10;   // hard-coded value
    int width = 5;     // hard-coded value
    int area;

    area = length * width;

    printf("Length = %d, Width = %d\n", length, width);
    printf("Area of Rectangle = %d\n", area);

    return 0;
}
