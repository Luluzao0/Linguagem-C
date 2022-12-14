#include <stdio.h>
#include <math.h>

// Função para calcular a derivada de uma determinada função em um determinado ponto
double derivada(double (*f)(double), double x)
{
    // Defina o tamanho
    double h = 0.00001;

    // Retorne a derivada usando a definição da derivada
    return (f(x + h) - f(x)) / h;
}

// Exemplo de função para encontrar a derivada de
double f(double x)
{
    return x * x;
}

int main()
{
    // Defina o ponto no qual deseja a derivada
    double x = 2;

    // Avalie a derivada e imprima o resultado
    printf("A derivada de f(x) em x= %lf is %lf\n", x, derivada(f, x));

    return 0;
}
