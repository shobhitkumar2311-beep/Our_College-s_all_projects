/* Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional*/
#include <stdio.h>

// Structure for 2D vector
struct Vector
{
    int x, y;
};

// Function to add two vectors
struct Vector sumVector(struct Vector a, struct Vector b)
{
    struct Vector result;
    result.x = a.x + b.x; // add x parts
    result.y = a.y + b.y; // add y parts
    return result;
}

int main()
{
    struct Vector v1 = {2, 3}, v2 = {4, 5};  // two vectors
    struct Vector sum = sumVector(v1, v2);   // call function
    printf("Sum: (%di, %dj)\n", sum.x, sum.y); // print result
    return 0;
}
