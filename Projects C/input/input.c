#include <stdio.h>
#include <string.h>


int main(){

    
    char name[25]; //bytes
    int age;


    printf("\n what's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // ler qualquer espaço
    name[strlen(name)-1] = '\0';

    printf("\n how old are u?\n");
    scanf("%d", &age); 
    

    printf("\nHello %s\n", name);
    printf("u are %d years old. \n", age);

    return 0;
}