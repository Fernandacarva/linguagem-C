#include <stdio.h>
#include <math.h>

int main(void)
{
    double  n;
    double  raiz;
    double  quadrado;

    printf("Digite um número: ");
    scanf("%lf", &n);
    if (n > 0)
    {
        raiz = sqrt(n);
        printf("Valor da raiz: %.2f\n", raiz);
        quadrado = pow(n, 2);
        printf ("Numero ao quadrado: %.2f\n", quadrado);
    }
    return (0);
}