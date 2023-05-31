#include <stdio.h>

int main(void)
{
    char s1;

    s1 = 'F';
    while (s1 >= 'A' && s1 <= 'Z')
    {
        s1 = s1 + 32;
        printf("a letra: %c\n", s1);
    }
    return (0);
}
