#include <stdio.h>
#include <conio.h>

int main(){
    int hora;
    float salario;
    printf("\nHoras Trabalhadas:");
    scanf("%d",&hora);
    salario = hora * 19.50;
    if(salario>1500) 
    salario = 0.90 * salario;
    printf("\nSalario Liquido: R$ %.2f",salario);
}