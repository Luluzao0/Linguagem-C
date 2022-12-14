#include <stdio.h>

int main(void){
    //num de func
    const int num_func = 10;

    //array de salarios dos funcionarios
    int salarios[num_func] = {100, 300, 400, 500, 900, 700, 800, 200, 600, 1000};

    //setar o valor inicial do maior e menor salario
    int maior_salario = salarios[0];
    int menor_salario = salarios[0];

    //interagir o array de salarios e setar maior e menor salario.
    for (int i = 0; i < num_func; i++){
        if (salarios[i] > maior_salario){
            maior_salario = salarios[i];
        }

        if (salarios[i] < menor_salario){
            menor_salario = salarios[i];
        }
    }

    printf("o maior salario: %d ", maior_salario);
    printf("o menor salario: %d", menor_salario);

    return 0;
}