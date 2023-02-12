#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("É par\n");
    else if (n % 2 == 1)
        printf("É impar\n");
    return (0);
}