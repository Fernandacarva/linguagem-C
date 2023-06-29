#include <stdio.h>

int main(void)
{
    int i, n, soma;

    i = 0;
    soma = 0;
    
    while (i < 10)
    {
        i++;
        scanf("%d", &n);
        soma = soma + n;
    }
    printf("%d\n", soma);
    return 0;

}