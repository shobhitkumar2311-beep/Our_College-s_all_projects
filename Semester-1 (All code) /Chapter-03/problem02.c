/* Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user. */

#include <stdio.h>
int main()
{
    float s1, s2, s3; // subject marks

    // Enter marks for 3 subjects by the user
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    // sum of marks
    float total = s1 + s2 + s3;

    // percentage calculation
    float percent = (total / 300) * 100;

    // Pass if percentage ≥ 40 AND each subject ≥ 33
    if (percent >= 40 && s1 >= 33 && s2 >= 33 && s3 >= 33)
    {
        printf("You have passed in the examination.\n");
    }
    else
    {
        printf("You have failed in the examination due to the less marks in one or more subjects.\n");
    }

    return 0;
}
