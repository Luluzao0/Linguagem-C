#include <stdio.h>

int main(void){

    //entrar com expressao do usuario
    printf("Digite a expressão matematica:");

    //ler a expressao para o usuario
    char expressao[256];
    scanf("%s", expressao);

    //validando a expressao e printando o resultado
    printf("Resultado: %d \n", eval(expressao));

    return 0;
}

int eval(const char *expressao){
    // TODO: implementar funções que resolvam as expressoes matematica
}