#include<stdio.h>
double f(double x,double y)
{
return (x+y);
}
int main()
{
double x0,y0,h;
scanf("%lf %lf %lf",&x0,&y0,&h); double xn;
scanf("%lf",&xn); while(x0 < xn)
{
double k1=h*(f(x0,y0));
double k2=h*(f(x0+(h/2.0),y0+(k1/2.0)));
double k3=h*(f(x0+(h/2.0),y0+(k2/2.0))); double k4=h*(f(x0+h,y0+k3));
double k=(k1+2*k2+2*k3+k4)/6.0; y0=y0+k;
x0=x0+h;
}
printf("%lf %lf",xn,y0);
}
