#include <stdio.h>

int main(void)
{
    int n, i, soma;
    float media;

    soma = 0;
    n = 0;
    i = 0;

    while (i <= 10)
    {
        i++;
        scanf("%d", &n);
        soma += n;
    }
    media = soma / 10;

    printf("Media é: %f\n", media);
    return (0);
}