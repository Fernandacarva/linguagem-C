#include <stdio.h>

int main(void)
{
    int n1;
    int n2;

    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);
    if (n1 > n2)
        printf("Maior: %d\n", n1);
    if (n1 < n2)
        printf("Maior: %d\n", n2);
    else if (n1 == n2)
        printf("São iguais\n");
        return (0);
}