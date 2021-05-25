/*
10.	Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. 
Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. 
Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,num;
	
	i = 1;
	while(num != 0)
	{
		printf("Digite um número: ");
		scanf("%d",&num);
		
		if(num < 0)
		{
			printf("NEGATIVO\n");
		}else
			if(num > 0)
			{
				printf("POSITIVO\n");
			}
			
		i++;
	}
    system("pause");
}
