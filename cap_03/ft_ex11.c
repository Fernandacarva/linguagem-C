#include <stdio.h>

int main(void)
{
    float A;
    float raio;
    float pi;

    pi = 3.141592;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    A = (pi * raio) * 2;
    printf("O valor de A é: %f\n", A);
    return (0);
}