#include <stdio.h>

int main(){
    int a, b, c;

    printf("informe os lados:");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("\né um triangulo");
        if(a == b && a == c)
            printf("\nequilatero");
        else
            if(a == b || a == c || b == c)
                printf("\nisoceles");
            else
                printf("\nescaleno");
    }
    else
        printf("\nnão é triangulo.");
}