#include <stdio.h>
int main() {
    int a[3][3], i, j, z = 0, nz = 0;

    // Input matrix
    printf("Enter 9 elements for 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            (a[i][j] == 0) ? z++ : nz++;
        }

    // Print matrix
    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    // Sparse matrix representation
    if (z > nz) {
        printf("\nSparse matrix (row col value):\n");
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                if (a[i][j] != 0)
                    printf("%d %d %d\n", i, j, a[i][j]);
    } else
        printf("\nNot a sparse matrix.\n");

    return 0;
}
