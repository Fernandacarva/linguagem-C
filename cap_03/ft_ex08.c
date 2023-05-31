#include <stdio.h>

int main(void)
{
	float	tc;
	float	tf;

	tc = 0;
	tf = 0;
	printf("Passse a temperatura em celsius: ");
	scanf("%f", &tc);
	tf = ((tc / 5) * 9) + 32;
	printf("A tempera em Fahrenheit: %f\n", tf) ;
	return (0);
}
