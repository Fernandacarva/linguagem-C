#include <stdio.h>

int main(void)
{
    int a[10], b[10], c[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Valores de a: %d", i);
        scanf("%d", &a[i]);
        
    }

    for (i = 0; i < 10; i++)
    {
        printf("Valores de b: %d", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++)
        c[i] = a[i] - b[i];
    
    printf("Calculo:\n");
    for (i = 0; i < 10; i++);
        printf("Total: %d\n", c[i]);
    return (0);
}