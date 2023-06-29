#include <stdio.h>

int main(void)
{
    int n;

    n = 10;
    while (n >= 0)
    {
        printf("%d\n", n);
        n = n - 1;
    }
    printf("FIM\n");
    return (0);
}