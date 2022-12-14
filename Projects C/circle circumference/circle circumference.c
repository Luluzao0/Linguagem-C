#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("\nInforme o raio do circulo:");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference is: %lf", circumference);
    printf("\nAre is: %lf", area);
    return 0;
}