#include <stdio.h>

void print_pattern(int selection)
{
    switch (selection)

    {

    case 1:
        printf("Here your project is on the your screen.\n");
        printf("My name is Shobhit.\n");
        printf("Hello world!\n");
        break;

    case 2:
        printf("Here your project is on the your screen.\n");
        int a2 = 10;
        int b2 = 10;
        int sum2 = a2 + b2;
        printf("Sum is here : %d\n", sum2);
        int c2 = 20;
        int d2 = 10;
        int sub2;
        sub2 = c2 - d2;
        printf("Sub is here : %d\n", sub2);
        break;
    case 3:
        printf("Here your project is on the your screen.\n");
        float p3, r3, t3, i3;
        printf("Enter the principal, rate and time of values:\n");
        if (scanf("%f%f%f", &p3, &r3, &t3) != 3)
        {
            printf("Invalide input. \n");
        }
        i3 = p3 * r3 * t3 / 100.00;
        printf("Simple interset is here (IO): %2lf\n", i3);
        break;

    case 4:
        printf("Here your project is on the your screen.\n");
        int num4_1, num4_2, num4_3;
        printf("Enter the three integers:\n");
        scanf("%d%d%d", &num4_1, &num4_2, &num4_3);
        if (num4_1 >= num4_2 && num4_1 >= num4_3)
        {
            printf("%d is the largest number.\n", num4_1);
        }
        else if (num4_2 >= num4_1 && num4_2 >= num4_3)
        {
            printf("%d is the largest number.\n", num4_2);
        }
        else
        {
            printf("%d is the largest number.\n", num4_3);
        }
        break;

    case 5:
        printf("Here your project is on the your screen.\n");
        int num5_1;
        printf("Enter an integer:");
        scanf("%d", &num5_1);
        if (num5_1 % 2 == 0)
        {
            printf("%d is an even number.\n", num5_1);
        }
        else
        {
            printf("%d is an odd number.\n", num5_1);
        }
        break;

    case 6:
        printf("Here your project is on the your screen.\n");
        int day_number;
        printf("Enter a number (1-7)for the day of the week:");
        scanf("%d", &day_number);
        switch (day_number)
        {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between (1 to 7).\n");
        }
        break;

    case 7:
        printf("Here your project is on the your screen:\n");
        int sum7_a = 0;
        for (int i7_1 = 1; i7_1 <= 20; i7_1++)
        {
            sum7_a += i7_1;
        }
        printf("The sum of the first twenty natural number is : %d.\n", sum7_a);

        break;
    case 8:

        printf("Here your project is on the your screen.\n");
        int n8, t8_1 = 0, t8_2 = 1, t8_3;
        printf("Enter the number of the term for fibonocci series:");
        scanf("%d", &n8);
        printf("Fibonacci series is here:");
        for (int i8 = 1; i8 <= n8; i8++)
        {
            printf("%d ", t8_1);
            t8_3 = t8_2 + t8_1;
            t8_2 = t8_1;
            t8_1 = t8_3;
        }
        printf("\n");
        break;

    case 9:
        printf("Here your project is on the your screen:\n");
        {
            int choose_option;

            printf("Choose one option of the following (1 or 2): ");
            scanf("%d", &choose_option);

            switch (choose_option)
            {
            case 1:
            {
                int n9;
                printf("Enter the rows: ");
                scanf("%d", &n9);
                for (int i9_1 = 1; i9_1 <= n9; i9_1++)
                {
                    for (int j9_1 = 1; j9_1 <= i9_1; j9_1++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            }

            case 2:
            {
                int m9;
                printf("Enter the rows: ");
                scanf("%d", &m9);
                for (int i9_2 = 1; i9_2 <= m9; i9_2++)
                {
                    for (int j9_2 = 1; j9_2 <= i9_2; j9_2++)
                    {
                        printf("%d ", j9_2);
                    }
                    printf("\n");
                }
                break;
            }
            default:
                printf("Invalid value\n");
            }
        }

        break;

    case 10:
        printf("Here your project is on the your screen:\n");

        char op10, cont10;
        int num10_1, num10_2;
        do
        {
            printf("Enter the operator (+ - * /): ");
            scanf(" %c", &op10);

            printf("Enter the numbers: ");
            scanf("%d", &num10_1);

            printf("Enter the numbers: ");
            scanf("%d", &num10_2);

            if (op10 == '+' || op10 == '-' || op10 == '*' || (op10 == '/' && num10_2 != 0))
            {
                double result = (op10 == '+') ? num10_1 + num10_2 : (op10 == '-') ? num10_1 - num10_2
                                                                : (op10 == '*')   ? num10_1 * num10_2
                                                                                  : (double)num10_1 / num10_2;

                printf("%d %c %d = %lf\n", num10_1, op10, num10_2, result);
            }
            else
            {
                printf("Error: %s\n", (op10 == '/' && num10_2 == 0) ? "Division by zero" : "Invalid operator");
            }

            printf("Can you perform another calculation (Y/N): ");
            scanf(" %c", &cont10);

        } while (cont10 == 'Y' || cont10 == 'y');

        printf("Goodbye!\n");
        break;

    case 11:
        printf("Here your project is on the your screen.\n");
        int age11;
        printf("Enter the age of a person:");
        scanf("%d", &age11);
        if (age11 <= 12)
        {
            printf("he/she is a child.");
        }
        else if (age11 >= 13 && age11 <= 20)
        {
            printf("he/she is a teenager.");
        }

        else if (age11 >= 20 && age11 <= 40)
        {
            printf("he/she is a younger.");
        }

        else
        {
            printf("he/she is an older");
        }

        break;

    case 12:
        printf("Here your project is on the your screen.\n");
        int select_pattern;
        printf("Enter the pattern number:");
        scanf("%d", &select_pattern);
        switch (select_pattern)
        {
        case 1:
            printf("1st pattern is here:\n");
            {
                int n121, i121, j121;
                printf("Enter the number of rows:");
                scanf("%d", &n121);
                for (i121 = 1; i121 <= n121; i121++)
                {
                    for (j121 = 1; j121 <= n121 - i121; j121++)
                        printf(" ");
                    for (j121 = 1; j121 <= 2 * i121 - 1; j121++)
                        printf("%d", i121);
                    printf("\n");
                }
            }

            break;
        case 2:
            printf("2nd pattern is here:\n");
            {
                int n122, i122, j122;
                printf("Enter the number of rows:");
                scanf("%d", &n122);
                for (i122 = 1; i122 <= n122; i122++)
                {
                    for (j122 = 1; j122 <= n122 - i122; j122++)
                        printf(" ");
                    for (j122 = 1; j122 <= 2 * i122 - 1; j122++)
                        printf("*");
                    printf("\n");
                }
            }

            break;

        default:
            printf("Invalide value");
            break;
        }
        break;

    case 13:
        printf("Here your project is on the your screen.\n");
        int choose_option;
        printf("Select one pattern for the print:");
        scanf("%d", &choose_option);

        switch (choose_option)
        {

        case 1:
            printf("This pattern number is 1:\n");
            int n13, i13, j13;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &n13);
            for (i13 = n13; i13 >= 1; i13--)
            {
                for (j13 = 1; j13 <= i13; j13++)
                {
                    printf("%d", j13);
                }
                printf("\n");
            }

            break;

        case 2:
            printf("This pattern number is 2:\n");
            int m13, k13, l13;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &m13);
            for (k13 = m13; k13 >= 1; k13--)
            {
                for (l13 = 1; l13 <= k13; l13++)
                {
                    printf("*", l13);
                }
                printf("\n");
            }

            break;

        default:
            printf("invalid input");
            break;
        }

        break;

    case 14:
        printf("Here your project is on the your screen.\n");
        int choose_pattern;
        printf("Select one pattern for the print:");
        scanf("%d", &choose_pattern);

        switch (choose_pattern)
        {

        case 1:
            printf("This pattern number is 1:\n");
            int n14, i14, j14;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &n14);
            for (i14 = 0; i14 < n14; i14++)
            {
                for (j14 = 1; j14 <= n14; j14++)
                {
                    printf("%d ", j14);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("This pattern number is 2:\n");
            int m14, k14, l14;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &m14);
            for (k14 = 0; k14 < m14; k14++)
            {
                for (l14 = 1; l14 <= m14; l14++)
                {
                    printf("* ", l14);
                }
                printf("\n");
            }
            break;

        default:
            printf("invalid input");
            break;
        }
        break;

    case 15:
        printf("Here your project is on the your screen.\n");
        int select_option;
        printf("Select one pattern for the print:");
        scanf("%d", &select_option);

        switch (select_option)
        {

        case 1:
            printf("This pattern number is 1:\n");
            int n15, i15, j15;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &n15);
            for (i15 = 0; i15 < n15; i15++)
            {
                for (j15 = 1; j15 <= n15; j15++)
                {
                    printf("%d ", j15);
                }
                printf("\n");
            }

            break;

        case 2:
            printf("This pattern number is 2:\n");
            int m15, k15, l15;
            printf("Enter the number of rows in the pattern:");
            scanf("%d", &m15);
            for (k15 = 0; k15 < m15; k15++)
            {
                for (l15 = 1; l15 <= m15; l15++)
                {
                    printf("* ", l15);
                }
                printf("\n");
            }

            break;

        default:
            printf("invalid input");
            break;
        }

        break;

    case 16:
        printf("Here your project is on the your screen.\n");
        int n16, i16, j16;
        printf("Enter the numbers of rows:");
        scanf("%d", &n16);
        for (i16 = n16; i16 >= 1; i16--)
        {
            for (j16 = 1; j16 <= i16; j16++)
            {
                printf("%c ", 'A' + j16 - 1);
            }
            printf("\n");
        }
        break;

    case 17:
        printf("Here your project is on the your screen.\n");

        int n17, i17, j17, k17;
        printf("Enter the numbers of rows:");
        scanf("%d", &n17);
        for (i17 = 0; i17 < n17; i17++)
        {
            for (j17 = 0; j17 < i17; j17++)
            {
                printf("  ");
            }
            for (k17 = i17; k17 < n17; k17++)
            {
                printf("%c ", 'A' + k17);
            }

            printf("\n");
        }

        break;

    case 18:
        printf("Here your project is on the your screen.\n");

        int n18, i18, j18, k18;
        printf("Enter the numbers of rows:");
        scanf("%d", &n18);
        for (i18 = 1; i18 <= n18; i18++)
        {
            for (j18 = 1; j18 <= n18 - i18; j18++)
            {
                printf(" ");
            }
            for (k18 = 1; k18 <= i18; k18++)
            {
                printf("%d", k18);
            }

            printf("\n");
        }

        break;

    case 19:
        printf("Here your project is on the your screen.\n");

        int n19, i19, j19;
        printf("Enter the number of rows:");
        scanf("%d", &n19);
        for (i19 = 1; i19 <= n19; i19++)
        {
            for (j19 = 1; j19 <= i19; j19++)

                printf("%c ", 'A' + (j19 - 1));
            printf("\n");
        }

        break;

    case 20:
        printf("Here your project is on the your screen.\n");

        int n20, i20, j20;
        printf("Enter the number of rows:");
        scanf("%d", &n20);
        for (i20 = n20; i20 >= 1; i20--)
        {
            for (j20 = 1; j20 <= i20; j20++)

                printf("%d ", i20);
            printf("\n");
        }

        break;

    case 21:
        printf("Here your project is on the your screen.\n");

        int n21, i21, j21, k21;
        printf("Enter the number of rows:");
        scanf("%d", &n21);
        for (i21 = 1; i21 <= n21; i21++)
        {
            for (j21 = 1; j21 <= i21; j21++)
            {
                printf(" ");
            }
            for (k21 = i21; k21 <= n21; k21++)
                printf("%d", k21);
            printf("\n");
        }

        break;

    case 22:
        printf("Here your project is on the your screen.\n");

        int n22, i22, j22;
        printf("Enter the number of rows:");
        scanf("%d", &n22);
        for (i22 = 1; i22 <= n22; i22++)
        {
            for (j22 = 1; j22 <= i22; j22++)
                printf("%d ", i22);
            printf("\n");
        }

        break;

    case 23:
        printf("Here your project is on the your screen.\n");

        int n23, i23, j23, counter = 1;
        printf("Enter the number of rows:");
        scanf("%d", &n23);
        for (i23 = 1; i23 <= n23; i23++)
        {
            for (j23 = 1; j23 <= i23; j23++)
                printf("%d ", counter++);
            printf("\n");
        }

        break;

    case 24:
        printf("Here your project is on the your screen.\n");
            int n24, r24, temparay24, sum24 = 0;
            printf("enter the vanle of n:");
            scanf("%d", &n24);
            temparay24 = n24;
            while (temparay24 > 0)
            {
                r24 = temparay24 % 10;
                sum24 += r24 * r24 * r24;
                temparay24 /= 10;
            }
            if (sum24 == n24)
            {
                printf("%d This is armstron number.", n24);
            }
            else
            {
                printf("%d This is not armstron number.");
            }

        break;

    case 25:
        printf("Here your project is on the your screen.\n");
        {
            int i25, j25, k25, n25;
            char ch25 = 'A';
            printf("Enter the number of rows:");
            scanf("%d", &n25);
            for (i25 = 1; i25 <= n25; i25++)
            {
                for (j25 = n25; j25 > i25; j25--)
                    printf("  ");
                for (k25 = 0; k25 < i25; k25++)
                    printf("%c ", ch25 + k25);
                printf("\n");
            }
            for (i25 = n25 - 1; i25 >= 1; i25--)
            {
                for (j25 = n25; j25 > i25; j25--)
                    printf("  ");
                for (k25 = 0; k25 < i25; k25++)
                    printf("%c ", ch25 + k25);
                printf("\n");
            }
        }

        break;
    case 26:
        printf("Here your project is on the your screen.\n");

        break;

    default:
        printf("Invalid selection\n");
    }
}

int main()
{
    int selection;
    printf("Enter the project number ");
    scanf("%d", &selection);
    print_pattern(selection);
    return 0;
}
/*Enter the project number 1
Here your project is on the your screen.
My name is Shobhit.
Hello world!
*/

/*Enter the project number 2
Here your project is on the your screen.
Sum is here : 20
Sub is here : 10*/

/*Enter the project number 3
Here your project is on the your screen.
Enter the principal, rate and time of values:
10000
12
3
Simple interset is here (IO): 3600.000000*/

/*Enter the project number 4
Here your project is on the your screen.
Enter the three integers:
2536
-463763
37635
37635 is the largest number.*/

/*Enter the project number 5
Here your project is on the your screen.
Enter an integer:3654
3654 is an even number.

Enter the project number 5
Here your project is on the your screen.
Enter an integer:23462635
23462635 is an odd number.*/

/*Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:1
Monday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:2
Tuesday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:3
Wednesday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:4
Thursday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:5
Friday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:6
Saturday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:7
Sunday
Enter the project number 6
Here your project is on the your screen.
Enter a number (1-7)for the day of the week:8
Invalid input. Please enter a number between (1 to 7).*/
/*Enter the project number 7
Here your project is on the your screen:
The sum of the first twenty natural number is : 210.*/

/*Enter the project number 8
Here your project is on the your screen.
Enter the number of the term for fibonocci series:20
Fibonacci series is here:0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 */

/*Enter the project number 9
Here your project is on the your screen:
Choose one option of the following (1 or 2): 1
Enter the rows: 6
*
**
***
****
*****
******

Enter the project number 9
Here your project is on the your screen:
Choose one option of the following (1 or 2): 2
Enter the rows: 6
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

Enter the project number 9
Here your project is on the your screen:
Choose one option of the following (1 or 2): 3
Invalid value.  */

/*Enter the project number 10
Here your project is on the your screen:
Enter the operator (+ - * /): +
Enter the numbers: 45637
Enter the numbers: 23647
45637 + 23647 = 69284.000000

Can you perform another calculation (Y/N): y
Enter the operator (+ - * /): -
Enter the numbers: 237647834
Enter the numbers: 3436534
237647834 - 3436534 = 234211300.000000

Can you perform another calculation (Y/N): y
Enter the operator (+ - * /): *
Enter the numbers: 30
Enter the numbers: 25
30 * 25 = 750.000000

Can you perform another calculation (Y/N): y
Enter the operator (+ - * /): /
Enter the numbers: 3445678
Enter the numbers: 2
3445678 / 2 = 1722839.000000

Can you perform another calculation (Y/N): n
Goodbye! */

/*Enter the project number 11
Here your project is on the your screen.
Enter the age of a person:10
he/she is a child.*/

/*Enter the project number 11
Here your project is on the your screen.
Enter the age of a person:15
he/she is a teenager. */

/*Enter the project number 11
Here your project is on the your screen.
Enter the age of a person:35
he/she is a younger.*/

/*Enter the project number 11
Here your project is on the your screen.
Enter the age of a person:65
he/she is an older */

/*Enter the project number 12
Here your project is on the your screen.
Enter the pattern number:1
1st pattern is here:
Enter the number of rows:7
1
222
33333
4444444
555555555
66666666666
7777777777777  */

/*Enter the project number 12
Here your project is on the your screen.
Enter the pattern number:2
2nd pattern is here:
Enter the number of rows:7
*
***
*****
*******
*********
***********
*************  */

/*Enter the project number 12
Here your project is on the your screen.
Enter the pattern number:3
Invalide value.  */

/*Enter the project number 13
Here your project is on the your screen.
Select one pattern for the print:1
This pattern number is 1:
Enter the number of rows in the pattern:5
12345
1234
123
12
1     */

/*Enter the project number 13
Here your project is on the your screen.
Select one pattern for the print:2
This pattern number is 2:
Enter the number of rows in the pattern:6
******
*****
****
***
**
*          */

/*Enter the project number 13
Here your project is on the your screen.
Select one pattern for the print:4
invalid input */

/*Enter the project number 14
Here your project is on the your screen.
Select one pattern for the print:1
This pattern number is 1:
Enter the number of rows in the pattern:5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5  */

/*Here your project is on the your screen.
Select one pattern for the print:2
This pattern number is 2:
Enter the number of rows in the pattern:7
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *    */

/*Enter the project number 14
Here your project is on the your screen.
Select one pattern for the print:3
invalid input */

/*Enter the project number 15
Here your project is on the your screen.
Select one pattern for the print:1
This pattern number is 1:
Enter the number of rows in the pattern:5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 */

/*Enter the project number 15
Here your project is on the your screen.
Select one pattern for the print:2
This pattern number is 2:
Enter the number of rows in the pattern:5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *     */

/*Enter the project number 15
Here your project is on the your screen.
Select one pattern for the print:3
invalid input */

/*Enter the project number 16
Here your project is on the your screen.
Enter the numbers of rows:5
A B C D E
A B C D
A B C
A B
A            */

/*Enter the project number 17
Here your project is on the your screen.
Enter the numbers of rows:6
A B C D E F
B C D E F
C D E F
D E F
E F
F

/*Enter the project number 18
Here your project is on the your screen.
Enter the numbers of rows:6
1
12
123
1234
12345
123456  */

/*Enter the project number 19
Here your project is on the your screen.
Enter the number of rows:6
A
A B
A B C
A B C D
A B C D E
A B C D E F       */

/*Enter the project number 20
Here your project is on the your screen.
Enter the number of rows:7
7 7 7 7 7 7 7
6 6 6 6 6 6
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1               */

/*Enter the project number 21
Here your project is on the your screen.
Enter the number of rows:7
1234567
234567
34567
4567
567
67
7            */

/*Enter the project number 22
Here your project is on the your screen.
Enter the number of rows:6
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6  */

/*Enter the project number 23
Here your project is on the your screen.
Enter the number of rows:5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15  */

/*Enter the project number 24
Here your project is on the your screen.
enter the vanle of n:407
407 This is armstron number.*/

/*Enter the project number 25
Here your project is on the your screen.
Enter the number of rows:4
A
A B
A B C
A B C D
A B C
A B
A            */

/**/