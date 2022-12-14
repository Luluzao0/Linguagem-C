#include <stdio.h>

int Soma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}

int main(){
    int a,b, resultadoDaSoma;
    a = 28;
    b = 20;
    resultadoDaSoma = Soma(a,b);
    printf("A soma de %d com %d é: %d",a,b,resultadoDaSoma);
    return 0;
}
