#include <stdio.h>
int main()
{
    int a[100], key, i, j, n, min, temp;
    printf("Enter the array size: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d", &a[i]);
    }

    // selection sorte code

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
    
    // swap condition is started at this place
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
    }
    printf("The stored array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
