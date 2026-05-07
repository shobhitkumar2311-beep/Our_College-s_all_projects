/* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.*/

#include <stdio.h>

int main()
{
    // This array is just example to demonstrate the concept. The actual values are not important for the question.
    int S[5] = {10, 20, 30, 40, 50};

    printf("S[3] = %d\n", S[3]);       // Fourth element
    printf("*(S+3) = %d\n", *(S + 3)); // Also fourth element

    return 0;
}
// so the correct answer is (ii) False, because *(S+3) refers to the fourth element of the array, not the third.