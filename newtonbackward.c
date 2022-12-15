#include <stdio.h> int main()
{
    int n;
    scanf("%d", &n);
    double k = 0;
    double arr[n][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    double x;
    scanf("%lf", &x);
    for (int i = 0; i < n; i++)
    {
        double s = 1;
        double t = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                s = s * (x - arr[j][0]);
                t = t * (arr[i][0] - arr[j][0]);
            }
        }
        k = k + ((s / (double)t) * arr[i][1]);
    }
    printf("%lf\n", k);
}
