/*
15	Escreva um algoritmo para ler um número inteiro (considere que serão lidos 
apenas valores positivos e inteiros) e escrever se é par ou ímpar.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num % 2 == 1)
		printf("Número impar\n");
	else 
		printf("Número par\n");	
	
	system("pause");
}
