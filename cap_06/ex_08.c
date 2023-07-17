#include <stdio.h>

int main(void)
{
    char ch1, ch2, ch3;

    ch2 = 'A';
    ch3 = 'i';

    ch1 = ch2 + ch3 - '0';
    printf("Forma: %c\nch2: %c\nch3: %c\n", ch1, ch2, ch3);
    return (0);
}