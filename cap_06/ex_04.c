#include <stdio.h>

int main(void)
{
    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;

    i = 0;

    while (a[i] != a[6])
    {
        printf("Todos os números: %d\n", a[i]);
        i++;
    }

    soma = (a[0] + a[1] + a[5]);
    printf("Total é: %d\n", soma);
    a[4] = 100;
    printf("Aqui: %d\n", a[4]);
    
    i = 0;

    while (a[i] != a[6])
    {
        printf("Valor: %d\n", a[i]);
        i++;
    }
    return (0);
}