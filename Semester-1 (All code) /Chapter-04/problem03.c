/* A do while loop is executed: 
a. At least once. 
b. At least twice. 
c. At most once. */


#include <stdio.h>
int main() 
{
    int x = 5;
    do
    {
        printf("Hello\n");  // This will run at least once
    } 
    while (x < 0);        // Condition is false
    
    return 0;
}
