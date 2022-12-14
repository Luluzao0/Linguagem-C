#include <stdio.h>
#include <stdlib.h>

float mediaVetor(float notas[], int tam){
        float media, soma = 0;
        int v;
        for(v=0; v<tam; v++){
            soma = soma + notas[v];
        }
        media = (float) soma / tam;
        return media;
    }

int main(){
    int i;
    int valores[] = {1,2,3,4,5,6,7,8,9,10};

    for(i=0; i < 10; i++){
        printf("%d \n", valores[i]);
    }
    
    
    printf("\n\n");
    
    int v;
    char vogais[] = {'a','e','i','o','u'};
    for(v=0; v < 5; v++){
        printf("%c \n", vogais[v]);
    }
    printf("\n\n");


    int a;
    float notas[] = {1,6,7,5,8,9,2,3};
    
    for(a = 0; a < 8; a++){
        printf("%f \n", notas[a]);
    }        
    
    float resultado;
    resultado = mediaVetor(notas, 8);
    printf("a media dos vetores e de %.2f\n", resultado);
 return 0;
}