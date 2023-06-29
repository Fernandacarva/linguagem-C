#include <stdio.h>

int main(void)
{
    int i, j;
    int num[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite os numeros: \n");
        scanf("%d", &num[i]);
        printf("\n");
    }
    for (j = 5; j >= 0; j--)
        printf("%d\n", num[j]);
    return (0);
}