#include <stdio.h>

int main(){
    // operadores aritmeticos
    /*
        +(add)
        -(sub)
        *(multp)
        /(div)
        %(mod)
        ++(incremento)
        --(decremento)
    */
   int x = 20;
   int y = 15;

   int z = x + y;
   int w = x - y;
   int s = x * y;
   int t = x / y;
   int u = x % y;
   int a = x++;
   int b = y--;
   int c = ++x;
   int d = --y;
   int doidera = x + (y % w) - (a - c) * ( d / t) /  z;

   
   int mano = 5;
   int ladrao = 2;                   /*para fazer a divisao do inteiro sem erros e com casas*/
   float div = mano / (float) ladrao;                                        
   
   float x_ = 150000; // foi preciso trocar o tipo da variavel para nao o calculo nao ficar errado.
   float y_ = 3000; 
   float ca = x_ / y_;

   printf("o valor de z e: %d \n", z);
   printf("o valor de w e: %d \n", w);
   printf("o valor de s e: %d \n", s);
   printf("o valor de t e: %d \n", t);
   printf("o valor de u e: %d \n", u);
   printf("o valor de a e: %d \n", a);
   printf("o valor de b e: %d \n", b);
   printf("o valor de c e: %d \n ", c);
   printf("o valor de d e: %d \n", d);
   printf("o valor de doidera e: %d \n", doidera);
   printf("o valor de ca e: %.2f \n", ca);
   printf("o valor de div e: %f \n", div);


   return 0;
}