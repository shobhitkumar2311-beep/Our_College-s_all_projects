/* Create a two-dimensional vector using structures in C */

#include <stdio.h>

// Define a structure for 2D vector
struct Vector {
    int x; // x-coordinate
    int y; // y-coordinate
};

int main() {
    struct Vector v1 = {3, 4}; // initialize vector
    printf("Vector: (%di, %dj)\n", v1.x, v1.y); // print vector
    return 0;
}
