#include <stdio.h>
int main()
{
    int a[100], key, i, j, n;
    printf("Enter the array size: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d", &a[i]);
    }

    // insertion code

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    printf("The stored array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
