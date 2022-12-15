#include <stdio.h>
double f(double x, double y, double h)
{
    double v = (y - x) / (double)(y + x);
    return v;
}
int main()
{
    double h;
    double x0;
    double y0;
    scanf("%lf %lf %lf", &x0, &y0, &h);
    double xn;
    scanf("%lf", &xn);
    while (x0 < xn)
    {
        y0 = y0 + h * (f(x0, y0, h));
        x0 = x0 + h;
    }
    printf("%lf %lf", xn, y0);
}
