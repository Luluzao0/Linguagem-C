#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("enter side A:", A);
    scanf("%lf", &A);
    printf("enter side B:", B);
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Hipotenusa e: %.lf", C);


    return 0;
}