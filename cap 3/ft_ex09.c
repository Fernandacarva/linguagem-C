#include <stdio.h>

int main(void)
{
	float	graus;
	float	rad;
	printf("Passe o valor em graus: ");
	scanf("%f", &graus);

	rad  = graus * (3.141592 / 180);
	printf("O valor em radianos é: %f\n", rad);
	return (0);
}
