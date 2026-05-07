/* What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++); */

#include <stdio.h>
int main() 
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++); 
    // This will produce undefined behavior due to modifying 'a' multiple times without sequence points.
    return 0;
}

//Output will be 6 6 4