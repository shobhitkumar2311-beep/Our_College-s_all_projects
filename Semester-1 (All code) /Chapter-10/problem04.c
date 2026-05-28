/* Take name and salary of two employees as input from the user and write them to a text file in the following format:
i. Name1, 3300
ii. Name2, 7700*/

#include <stdio.h>

int main()
{
    FILE *fp;                  // file pointer
    char name1[20], name2[20]; // employee names
    int sal1, sal2;            // employee salaries

    printf("Enter name and salary of employee 1: ");
    scanf("%s %d", name1, &sal1); // input name and salary

    printf("Enter name and salary of employee 2: ");
    scanf("%s %d", name2, &sal2); // input name and salary

    fp = fopen("problem04_employee.txt", "w");      // open file in write mode
    fprintf(fp, "%s, %d\n", name1, sal1); // write first employee
    fprintf(fp, "%s, %d\n", name2, sal2); // write second employee

    fclose(fp); // close file
    printf("Employee data saved in problem04_employee.txt\n");
    return 0;
}
