#include <stdio.h>

int main(void)
{
    int n, multiplo;

    n = 1;
    while (n <= 5)
    {
        multiplo = n * 3;
        n++;
        printf("%d\n", multiplo);
    }
    return (0);
}