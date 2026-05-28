/* Solve problem 1 using calloc()*/
#include <stdio.h>
#include <stdlib.h>

int main() {
int n = 6;
    int *arr;
    arr = (int*) calloc(n, sizeof(int)); // allocate memory with calloc (initialized to 0)

    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Array created using calloc:\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]); // will print 0s

    free(arr);
    return 0;
}
