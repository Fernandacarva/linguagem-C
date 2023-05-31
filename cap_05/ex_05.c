
#include <stdio.h>  

int main(void) 
{  
    int i, soma;

    i = 0;
    soma = 0; 

    while (i <= 100) 
    {
        i++;
        if (i % 2 == 0)
        soma = soma + i;  
    }  
    printf("%d\n", soma);  
    return 0;  
}