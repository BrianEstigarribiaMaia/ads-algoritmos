/*
1.Construa um algoritmo que possua uma função que leia uma variável inteira e uma procedure que escreva esta variável.  
*/

#include <stdio.h>
#include <stdlib.h>

int res;

int ler_variavel()
{
	
	printf("Digite um numero: ");
	scanf("%d",&res);
	
	return (res);
}

void escrever_variavel()
{
	printf("A variavel digitada foi : %d\n",res);
}

main()
{
	ler_variavel();
	escrever_variavel();
	
	system("pause");
}
