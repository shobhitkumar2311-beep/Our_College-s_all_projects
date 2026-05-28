/* Create an array of multiplication table 7 upto 10 (7X10=70). Use realloc to make it sotre 15 number ( from 7X1 to 7X15).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *table;
    table = (int *)malloc(10 * sizeof(int)); // table up to 10

    for (int i = 0; i < 10; i++)
    {
        table[i] = 7 * (i + 1);
    }
    printf("Table of 7 up to 10:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d \n", i + 1, table[i]);
    }

    // expand to 15
    table = (int *)realloc(table, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {

        table[i] = 7 * (i + 1);
    }
    printf("Table of 7 up to 15:\n");
    for (int i = 0; i < 15; i++)
    {
        printf("7 X %d = %d \n", i + 1, table[i]);
    }

    free(table);
    return 0;
}
