/* Write a program to illustrate the use of arrow operator → in C. */
#include <stdio.h>

// Structure for student
struct Student
{
    int roll;
    char grade;
};

int main()
{

    struct Student s1 = {101, 'A'}; // create student

    struct Student *ptr = &s1; // pointer to structure

    printf("Roll: %d, Grade: %c\n", ptr->roll, ptr->grade); // use -> with pointer to access members

    return 0;
}
