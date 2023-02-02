#include <stdio.h>

int main(void)
{
    int ano;
    int media;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    media = (2023 - ano);
    printf("O calculo é: %d\n", media);
    return (0);
}