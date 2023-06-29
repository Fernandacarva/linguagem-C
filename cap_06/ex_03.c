#include <stdio.h>

int main(void)
{
    int num[5];
    int i, j;

    for(i = 0; i < 5; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &num[i]);
        printf("\n");
    }

    j = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
    printf("A média é: %d\n", j);
    return (0);
}