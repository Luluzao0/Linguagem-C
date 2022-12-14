#include <stdio.h>
#include <math.h>

int main()
{
    // declarar as variaveis, constantes e coeficientes
    double a, b, c, d, e, f;

    // colocando para o usuario inserir
    printf("Digite o coeficiente e a constante da equação linear na formula ax + by = c, dx + ey = f: \n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    // computando valores de x e y usando a formula x = (ed - bf) / (ad - bc) and y = (af - cd) / (ad - bc)
    double x = (e * d - b * f) / (a * d - b * c);
    double y = (a * f - c * d) / (a * d - b * c);

    // solução
    printf("A solucao e: x = %lf, y = %lf\n", x, y);

    /*
        da para manipular as equações lineares, seus coeficientes e as constantes.
        no exemplo padrão: `ax + by = c`, `dx + ey = f`, e computar o valor de `x` e `y` usando a formula:
        ` x = (ed - bf / (ad - bc)` e ` y = (af - cd) / (ab - bc)`.
    
    */
    return 0;
}
