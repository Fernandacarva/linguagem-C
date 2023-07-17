#include <stdio.h>

int main(void)
{
    int num_negativos, i = 0;
    float num[10];
    float num_positivos = 0.0;

    num_negativos = 0;
    num_positivos = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite os numeros: ");
        scanf("%f", &num[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (num[i] < 0)
            num_negativos++;
        else
            num_positivos += num[i];    
    }
    printf("Quantidade de número negativos: %d\n", num_negativos);
    printf("Soma dos números positivos: %.2f\n", num_positivos);

    return (0);
}
