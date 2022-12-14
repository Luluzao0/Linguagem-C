#include <stdio.h>

//função
double f(double x);

//intervalo para aproximação
#define N 1000

//definir tamanho
#define h ((b-a)/N)

//função para computar a integral definida usando a regra do ponto do meio
double ponto_do_meio(double a, double b){
    double soma = 0;
    for(int i = 0; i<N; i++){
        //computar o ponto do meio em certo intervalo
        double x_meio = a + h/2 + i * h;
        //adicionar area de um retangulo com altura f(x_meio) e largura h
        soma += f(x_meio) * h;
    }
    return soma;
}

//exemplo de função integral
double f(double x){
    return x*x;
}

int main(){
    double a = 0;
    double b = 1;
    printf("A função integral definida de f(x) de %f ate %f e: %f\n", a,b, ponto_do_meio(a, b));
    return 0;
}