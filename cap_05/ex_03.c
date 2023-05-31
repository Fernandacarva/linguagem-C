#include <stdio.h>

int main(void)
{
    int n;

    n = 0;
    while (n <= 10)
    {
        if (n % 2 == 1)
            printf("%d\n", n);
        n++;
    }
    return (0);
}