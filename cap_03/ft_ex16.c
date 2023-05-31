#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("numero multiplicado por 2: %d\n", n << 3);
    printf("numero dividido por 2: %d\n", n >> 3);
    return (0);
}