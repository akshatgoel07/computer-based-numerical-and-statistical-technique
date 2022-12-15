#include <stdio.h>
#include <math.h>

double f(double x){
    return (6*x*x+11*x-35);
}
double f0(double x){
    return(12*x+11);
} 

int main(){
    double xn0,xn;
    
    double slope_limit=0.00001;
    double noDigits=-2;
    double t=0.5*pow(10,noDigits);

    
    printf("Enter initial approximation : ");
    scanf("%lf",&xn);
    xn0=xn;


    while(1){
        xn=xn0-f(xn0)/f0(xn0);
        if(fabs(f(xn0))<slope_limit){
            printf("slope limit too small");
        }
        xn=xn0-f(xn0)/f(xn);
        if(fabs(xn)==0){
            printf("Result is %lf",xn);
            break;
        }
        else if(fabs(xn0-xn)<t){
            printf("Result is %lf",xn);
            break;
        }
        xn0=xn;
    }
    return 0;
    
}