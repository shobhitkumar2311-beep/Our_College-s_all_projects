/* Write a structure capable of storing data. Write a function to compare those dates. */

#include <stdio.h>

// Structure to store a date
struct Date
{
    int day;   // day of month
    int month; // month number
    int year;  // year
};

// Function to compare two dates
int compare(struct Date d1, struct Date d2)
{
    if (d1.year != d2.year)
        return d1.year - d2.year; // compare year first
    if (d1.month != d2.month)
        return d1.month - d2.month; // then compare month
    return d1.day - d2.day;         // finally compare day
}

int main()
{
    struct Date d1, d2;

    // Input first date

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    // Input second date

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // Compare and print result
    int result = compare(d1, d2);

    if (result == 0) // if both dates are the same
    {
        printf("Both dates are same.\n");
    }
    else if (result < 0) // if first date is earlier
    {
        printf("First date comes earlier.\n");
    }
    else // if second date is earlier
    {
        printf("Second date comes earlier.\n");
    }
    return 0;
}
