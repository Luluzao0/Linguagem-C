#include <stdio.h>

int main(){
    //Declare as variaveis para guardar o nome do mercado, nome do item e o preço do item
    char store[100];
    char item[100];
    float preço;

    //input
    printf("Diga o nome do mercadin: ");
    scanf("%s", &store);
    printf("Diga o nome do item: ");
    scanf("%s", &item);
    
    //input preço 
    printf("Diga o preço do item: ");
    scanf("%f", &preço);
    
    //imprimir os itens e preços do mercadin
    printf("%s vende %s por $%.2f\n", store, item, preço);

    return 0;
}