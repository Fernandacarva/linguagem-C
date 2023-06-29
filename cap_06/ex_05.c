#include <stdio.h>

int main(void)
{
    int num[8] = {1, 5, 10, 25, 36, 8, 1, 2};
    int x, y, soma, i;

    i = 0;
    while (num[i] != num[8])
    {
        printf("Numeros: %d\n", num[i]);
        i++;
    }

    printf("Digite os números: ");
    scanf("%d%d", &x, &y);
    soma = (x + y);
    printf("Valor é igual: %d\n", soma);
    return (0);
}