#include <stdio.h>

int main(){
    // formart specifier % -> defines and formats a type of data to be displayed

    // %c = character 
    // %s = string (array of characters)
    // %f = float 
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align 


    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    float item4 = 11.05;
    
    printf("Item 1: $%.2f\n", item1);     // para colocar a precisão ou escolha de casas decimais, use o %.1f, %.2f
    printf("Item 2: $%8.1f\n", item2);    // para alinhar use o %Valor.ValorDecimalf  
    printf("Item 3: $%f\n", item3);       // look the difference of these decimals.
    printf("Item 4: $%-1.3f", item4);     // alinhar termos a margem esquerda. 
    
    return 0;
}