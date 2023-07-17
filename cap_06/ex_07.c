#include <stdio.h>

int main()
{   int x[10];
    int maior, menor, i;
    
    for(i = 0; i < 10; i++)
        scanf("%d", &x[i]);
    
    maior = x[0];
    menor = x[0];

    for (i = 0; i < 10; i++)
    {
        if (menor > x[i])
            menor = x[i];
        else if (maior < x[i])
            maior = x[i];
    }
    printf("Menor: %d\nMaior: %d\n", menor, maior);
    return (0);

}