#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int aux;
    int aux2;

    aux = --x;
    aux2 = y++;
    printf("Meu antecessor: %d\nMeu numero: 10\nMeu sucessor: %d\n", x, y);
    return (0);
}
