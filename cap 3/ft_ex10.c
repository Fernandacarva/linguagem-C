#include <stdio.h>

int main(void)
{
	int	real;
	int valor;

	real = 780000;
	valor = real / 100;
	printf("o valor que o primeiro ganhador vai receber: %d\n", valor * 46);
	printf("o valor que o segundo ganhador vai receber: %d\n", valor * 32);
	printf("o valor que o terceiro ganhador vai receber: %d\n", valor * 22);
	return (0);
}
