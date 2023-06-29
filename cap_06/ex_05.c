#include <stdio.h>

int main(void)
{
    int num[8] = {1, 5, 10, 25, 36, 8, 1, 2};
    int x, y, soma, i;

    i = 0;

    printf("%d\n", num[i]);

    scanf("%d", &x);
    printf("%d\n", x);

    scanf("%d", &y);
    printf("%d\n", y);

    soma = (x + y);
    printf("Valor é igual: %d\n", soma);
    return (0);
}