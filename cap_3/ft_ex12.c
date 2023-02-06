#include <stdio.h>

int main(void)
{
    float V;
    float raio;
    float altura;
    float pi;

    pi = 3.141592;
    printf("Digite o valor do raio");
    scanf("%f", &raio);
    printf("Digite o calor da altura");
    scanf("%f", &altura);
    V = (pi * altura) * raio * 2;
    printf("O valor da altura é: %f\n", V);
    return (0);
}