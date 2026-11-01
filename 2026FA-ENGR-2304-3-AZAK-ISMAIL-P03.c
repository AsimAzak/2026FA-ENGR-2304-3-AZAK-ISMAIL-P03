/*
2026FA-ENGR-2304-3-AZAK-ISMAIL-P03
*/

#include <stdio.h>

int main(void)
{
    double a1, b1, c1;
    double a2, b2, c2;
    double D, Dx, Dy;
    double x, y;
    int valid;

    do
    {
        printf("\nCramer's Rule - 2x2 Equation Solver\n\n");
        {
            printf("Enter a1: ");
            valid = scanf("%lf", &a1);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);
        do
        {
            printf("Enter b1: ");
            valid = scanf("%lf", &b1);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);

        do
        {
            printf("Enter c1: ");
            valid = scanf("%lf", &c1);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);

        do
        {
            printf("Enter a2: ");
            valid = scanf("%lf", &a2);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);

        do
        {
            printf("Enter b2: ");
            valid = scanf("%lf", &b2);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);

        do
        {
            printf("Enter c2: ");
            valid = scanf("%lf", &c2);

            if (valid != 1)
            {
                printf("Invalid value. Enter a number.\n");
                while (getchar() != '\n');
            }
        } while (valid != 1);

        // Calculate the main determinant
        D = (a1 * b2) - (a2 * b1);

        if (D == 0)
        {
            printf("\nD = 0. The system does not have a unique solution.\n");
            printf("Please enter another set of equations.\n");
        }

    } while (D == 0);

    /*
    Solve using Cramer’s Rule
    */

    // Calculate Dx and Dy
    Dx = (c1 * b2) - (c2 * b1);
    Dy = (a1 * c2) - (a2 * c1);

    // Calculate x and y
    x = Dx / D;
    y = Dy / D;

    printf("\nSolution:\n");
    printf("x = %.4f\n", x);
    printf("y = %.4f\n", y);

    return 0;
}

