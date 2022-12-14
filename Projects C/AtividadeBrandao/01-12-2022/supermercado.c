#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void entrada();
int menu();
void controladoraprodutos(float * preço);
void controladorabebida(float * preço);
void controladoracedula(float * cedula);
void controladoraTroco(float * troco);

int main(){
    int op;
	float precototal=0;
    float cedula = 0;	
    float troco = 0; 
	setlocale(LC_ALL,"");
	
    entrada();
    do{
        op = menu();
        switch(op){
        case 1:
			controladoraprodutos(&precototal);		
            break;
        case 2:
			controladorabebida(&precototal);
            break;
        case 3:
            controladoracedula(&cedula);
            break;
        case 4:
            controladoraTroco(&troco);
            break;
        }
        
    }while(op != 0 );
    printf("\n----------------------------------------\nCusto total dos produtos: %.2f\n----------------------------------------\n", precototal);
    return 0;
}

void entrada(){
	printf ("*************************************\n");
	printf ("****          Bem Vindo          ****\n");
	printf ("****              A              ****\n");
	printf ("****         Luisao Mercado      ****\n");
	printf ("*************************************\n");
}

int menu(){
    int op;
    printf(" \nProdutos Mais vendidos do Supermercado: \n\n");
    printf("1 - Carnes. \n");
    printf("2 - Bebidas. \n");
    printf("3 - Mostrar cedulas \n"); 
    printf("4 - Exibir cedulas \n");
    printf("0 - Finalizar o pedido.\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &op);
    return op;
}

void controladoraprodutos(float * preço) {	
	int opcarnes;
    printf ("\n1 - Alcatra - 49,00 R$ \n");
    printf ("2 - Picanha - 120,00 R$ \n");
    printf ("3 - Peito de Frango - 18,00 R$ \n");
    printf ("4 - Lombo Suino - 45,00 R$ \n");
    printf ("5 - Costela Suina - 55,00 R$ \n");
    printf("6 - Pato - 44,90 R$");
    printf ("Digite a opção desejada: \n");
    scanf ("%d", &opcarnes);
	switch(opcarnes){
		case 1:
			printf("\nVocê adicionou Alcatra ao carrinho!\n");
			*preço += 49;	
			break;
		case 2:
			printf("\nVocê adicionou Picanha ao carrinho!\n");
			*preço += 120;
			break;
		case 3:
			printf("\nVocê adicionou Peito de Frango ao carrinho!\n");
			*preço += 18;
			break;
		case 4:
			printf("\nVocê adicionou Lombo Suino ao carrinho!\n");
			*preço += 45;
			break;
		case 5:
			printf("\nVocê adicionou Costela Suina ao carrinho!\n");
			*preço += 55;
			break;
        case 6:
            printf("\nVocê adicionou Pato ao carrinho!\n");
            *preço += 44,90;
            break;
		default:
			printf("\nValor incorreto, tente novamente\n");
			break;
	}
}
void controladorabebida (float * preço) {
	int opbebida;
	char str [20];

    printf("\n1 - Suco Tang - 2,50 R$ \n");
    printf("2 - Coca Ks - 4,50 R$\n");
    printf("3 - Coca Litrao - 12,75 R$\n");
    printf("Digite a opção desejada:");
    scanf("%d", &opbebida);
    switch(opbebida){
		case 1:
			printf("\nInforme o tang: \n");
			scanf("%s", str);		
			printf("\nVocê adicionou tang de %s ao carrinho!\n", str);
			*preço += 2,50;
			break;
		case 2:
			printf("\nInforme coca ks: ");
			scanf("%s", str);
			printf("\nVocê adicionou %s ks ao carrinho!\n", str);
			*preço += 4,50;
			break;
		case 3:
			printf("\nInforme coca litrao: ");
			scanf("%s", str);
			printf("\nVocê adicionou %s litrao ao carrinho!\n", str);
			*preço += 12,75;
			break;
		default:
			printf("\n incorreto, tente novamente\n");
			break;
	}
}

void controladoracedula(float * cedula) {
    int opcedula;
    int c;
    float exibcedula[]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2 , 10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,  100,100};
    char ced[20];
    printf("\n  Temos Somente cedulas de: 2, 10, 100.  \n");
    printf("\n  1 - 2 R$  \n");
    printf("\n  2 - 10 R$  \n");
    printf("\n  3 - 100 R$  \n");
    printf("\n  4 - exibir cedulas \n");
    scanf("%d", &opcedula);
     switch(opcedula)
      {
      case 1:
            printf("\n informe quantas de 2 R$:\n", ced);
            scanf("%s", &ced);
            printf("\n Você adicionou %s cedulas ao caixa!\n");
            * cedula += 15;
            break;
      case 2:
            printf("\n informe quantas de 10 R$:\n", ced);
            scanf("%s", &ced);
            printf("\n Você adicionou %s cedulas ao caixa!\n");
            * cedula += 20;
            break;
      case 3:
            printf("\n informe quantas de 100 R$:\n", ced);
            scanf("%s", &ced);
            printf("\n Você adicionou %s cedulas ao caixa!\n");
            * cedula += 2;       
            break;
      case 4:
            for(c=0;c<37;c++){
            printf("\n total de cedulas: %f \n", exibcedula[c]);
            }
            * cedula += 37;
            break;
      default:
            printf("\n cedulas incorretas, tente novamente. \n");
            break;
        } 
}

void controladoraTroco(float * troco) { 
    float a = 0.25;
    float b = 0.10;
    float c = 0.05;
    float d = 0.01;
    float f = 0;

    int optroco;
    do{
        printf("Quanto de troco deseja receber? ");
        scanf("%f",&f);
    }while(f < 0);

    while(f >= a) {
        f -= a;
        optroco++;
    }

    while(f >= b) {
        f -= b;
        optroco++;
    }

    while(f >= c) {
        f -= c;
        optroco++;
    }

    while(f >= d) {
        f -= d;
        optroco++;
    }

    printf("Este troco exige %d moedas.\nObrigado volte sempre!\n", optroco);
}
