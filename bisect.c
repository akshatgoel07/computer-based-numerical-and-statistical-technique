#include <stdio.h>
#include <math.h>

double f(double x)
{
    return (6 * x * x + 11 * x - 35);
}
int main()
{
    double x0, x1, c;
    double noDigits = -4;
    double t = 0.5 * pow(10, noDigits);
    x0 = x1 = 0;

    while (f(x0) * f(x1) > 0 || x0 == x1)
    {
        printf("Enter Valid Range: "); 
        scanf("%lf,%lf", &x0, &x1);
    }
    printf("x0\t\tc\t\tx1\t\tf(c)");

    double x_prev = 0;

    while (1)
    {
        x_prev = c;
        c = (x0 + x1) / 2;

        if (f(c) == 0)
        {
            printf("Result is: %lf", c);
            break;
        }
        else if (f(c) * f(x0) < 0)
        {
            x1 = c;
        }
        else
        {
            x0 = c;
        }
        if (fabs(c - x_prev) <= t)
        {
            printf("Result is: %lf", c);
            break;
        }
    }
    return 0;
}