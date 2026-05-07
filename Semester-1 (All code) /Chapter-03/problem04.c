/* Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user. */

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year); // divisible by 400
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year); // divisible by 100 but not 400
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year); // divisible by 4 but not 100
    }
    else {
        printf("%d is not a leap year.\n", year); // not divisible by 4
    }
    return 0;
}
