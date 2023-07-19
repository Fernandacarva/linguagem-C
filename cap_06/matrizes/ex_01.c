#include <stdio.h>

int main()
{
    int vetor[3][3];
    int menor, i, j;

    menor = vetor[3][3];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite os numeros: [%d][%d]", i, j);
            scanf("%d", &vetor[i][j]);
        }
        if ( menor < vetor[i][j])
            menor = vetor[i][j];
        printf("Menor: %d\n", vetor[i][j]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", vetor[i][j]);
        
    }
    return (0);
}

