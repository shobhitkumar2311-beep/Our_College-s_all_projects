/* Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 */
#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    printf("The result of 3*x/y - z+k is: %d\n", result);
    return 0;
}
/* Step by step evaluation:
1. First, we substitute the values of x, y, z, and k into the expression:
   3 * 2 / 3 - 3 + 1
2. Next, we perform the multiplication and division (from left to right):
   6 / 3 - 3 + 1
3. Then, we perform the division:
   2 - 3 + 1
4. Finally, we perform the subtraction and addition (from left to right):
   -1 + 1
   0
*/