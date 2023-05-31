#include <stdio.h>

int main(void)
{
    int num = 123;
    int dezena, centena, unidade;

    unidade = num % 10;
    dezena = (num % 100) / 10;
    centena = num / 100;
    num = (unidade * 100) + (dezena * 10) + centena;
    printf("O valor ao contrario é: %i\n", num);
    return (0);
}