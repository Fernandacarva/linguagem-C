#include <stdio.h>

int main(void)
{
    int primeiro;
    int segundo;

    printf("Digite um valor: ");
    scanf("%d", &primeiro);
    printf("Digite outro valor: ");
    scanf("%d", &segundo);
    if (primeiro > segundo)
        printf("O maior valor é: %d\n", primeiro);
    else if (primeiro < segundo)
        printf("O maior valor é: %d\n", segundo);
    return (0);
}