/*
Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest. */

#include <stdio.h>
int main()
{
    float principal, rate, simple_interest;
    int time;

    // Entering values for principal, time and rate of interest
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // Input number of years and rate of interest
    printf("Enter number of years: ");
    scanf("%d", &time);

    // Input rate of interest
    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    // Calculating simple interest
    simple_interest = (principal * time * rate) / 100;

    // Output simple interest
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}