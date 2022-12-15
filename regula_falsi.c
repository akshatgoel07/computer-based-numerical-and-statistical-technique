#include<stdio.h>
#include<math.h>

double f(double x){
    return(x*x*x-4*x-9);
}

int main(){
    double a,b,c;
    double noDigits=-4; 
    double t= 0.5*pow(10,noDigits);
    a=b=0;

    while(f(a)*f(b)>0 || a==b){
        printf("Enter Valid Range: ");
        scanf("%lf,%lf",&a,&b);
    }
    double x_prev=0;
    while(1){
        x_prev=c;
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(c)==0){
            printf("Result is: %lf",c);
            break;
        }
        else if(f(a)*f(c)<0){
            b=c;
        }
        else{
            a=c;
        }
        if(fabs(c-x_prev)<t){
            printf("Result is %lf",c);
            break;
        }
    }
    return 0;
}