/*  Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab                                 Tax Rate
2.5 – 5.0L                                    5%
5.0L - 10.0L                                  20%
Above 10.0L                                   30%
*/
#include <stdio.h>
int main()
{
    float income, tax = 0;
    // income and tax variables

    // Input income from user
    printf("Enter income (in Lakhs): ");
    scanf("%f", &income);

    // Slab-wise tax calculation
    if (income > 2.5 && income <= 5.0)
    {
        tax = (income - 2.5) * 0.05; // 5% above 2.5L
    }
    else if (income > 5.0 && income <= 10.0)
    {
        tax = (2.5 * 0.05) + (income - 5.0) * 0.20; // 5% on 2.5L + 20% above 5L
    }
    else if (income > 10.0)
    {
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30; // add 30% above 10L
    }

    printf("Tax = %.2f Lakhs\n", tax); // final output
    return 0;
}
/*
| Income Range      | Tax Formula                                       | Example (Income)  | Tax Result    |
| ≤ 2.5L            | No tax                                            | 2.0L              | 0.0L          |
| 2.5L – 5.0L       | (Income – 2.5) × 5%                               | 4.0L              | 0.075L        |
| 5.0L – 10.0L      | (2.5 × 5%) + (Income – 5.0) × 20%                 | 8.0L              | 0.725L        |
| Above 10.0L       | (2.5 × 5%) + (5.0 × 20%) + (Income – 10.0) × 30%  | 12.0L             | 1.725L        |
*/
