#include <stdio.h>

int main(void)
{
    float kilometro;
    float   metros;

    printf("Digite os km: ");
    scanf("%f", &kilometro);
    metros = kilometro / 3.6;
    printf("%fm/s\n", metros);
    return (0);
}
    