#include <stdio.h>

int main(void)
{
    int i, num[6];

    printf("Digite os valores:");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
        printf("Valores lidos: %d\n", num[i]);
    }
    return (0);
}