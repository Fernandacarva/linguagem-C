#include <stdio.h>

int main(void)
{
    float   dollar;
    float   real;

    printf("Digite o valor em real: ");
    scanf("%f", &dollar);
    real = (dollar * 5);
    printf("Valor em dollar: %f\n", real);
    return (0);
}