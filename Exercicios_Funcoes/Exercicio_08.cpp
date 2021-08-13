/*
17.	 Desenvolva um algoritmo que crie uma função para calcular o valor de uma potência de um número qualquer. 
 Ou seja, ao informar para a função o número e sua potência deverá ser apresentado o resultado.
*/

#include <stdlib.h>
#include <stdio.h>

int pot(int base, int exp)
{
	if (exp == 0)
		return 1;
	else if(exp == 1)
		return base;
	
	return base * pot(base, exp - 1);
}

int main(int argc, char *argv[])
{
	int base, exp;
	
	printf("Base: ");
	scanf("%d", &base);
	printf("Expoente: ");
	scanf("%d", &exp);
	
	printf("\nResultado: %d\n", pot(base, exp));
	return 0;
}
