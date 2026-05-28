/* Solve problem 9 for time using the 'typedef' keyword*/

#include <stdio.h>

// Typedef for time structure
typedef struct
{
    int hour;   // store hours
    int minute; // store minutes
    int second; // store seconds
} Time;

// Function to compare two times

int compare(Time t1, Time t2)
{
    if (t1.hour != t2.hour)
        return t1.hour - t2.hour; // check hour first
    if (t1.minute != t2.minute)
        return t1.minute - t2.minute; // then check minute
    return t1.second - t2.second;     // finally check seconds
}

int main()
{
    Time t1, t2;

    // Input times from user
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    // Compare and show result
    int result = compare(t1, t2);

    if (result == 0)
    {
        printf("Both times are same.\n");
    }
    else if (result < 0)
    {
        printf("First time comes earlier. %d:%d:%d\n", t1.hour, t1.minute, t1.second);
    }
    else
    {
        printf("Second time comes earlier. %d:%d:%d\n", t2.hour, t2.minute, t2.second);
    }

    return 0;
}
