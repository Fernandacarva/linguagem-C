#include <stdio.h>

int main(void)
{
    float salario;
    float emprestimo;

    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    if (emprestimo >= (salario * 0.20))
        printf("Emprestimo não concedido.\n");
    else
        printf("Emprestimo concedido.\n");
    return (0);
}