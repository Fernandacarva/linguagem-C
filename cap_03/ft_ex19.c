#include <stdio.h>

int main(void)
{
    int n1;
    int n2;

    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor ");
    scanf("%d", &n2);
    printf("%d\n", n1 ^ n2);
    printf("%d\n", n1 | n2);
    printf("%d\n", n1 & n2);
    return (0);
}