/* Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.*/

#include <stdio.h>

int main()
{
    FILE *fp; // file pointer
    int num;  // number for table

    printf("Enter a number: ");
    scanf("%d", &num); // take input from user

    fp = fopen("problem02_table.txt", "w"); // open file in write mode 
    for (int i = 1; i <= 10; i++)
    {
        fprintf(fp, "%d x %d = %d\n", num, i, num * i); // write each line
    }

    fclose(fp); // close file
    printf("Multiplication table saved in table.txt\n");
    return 0;
}
