#include <stdio.h>

int main(void)
{
    int aux;

    printf("Digite um número: ");
    scanf("%d", &aux);
    aux = ~aux;
    printf("O complemento é: %d\n", aux);
    return (0);
}