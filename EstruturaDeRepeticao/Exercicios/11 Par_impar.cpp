/*
11.	Escreva um algoritmo para ler uma quantidade indeterminada de valores inteiros. 
Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. 
O algoritmo será encerrado imediatamente após a leitura de um valor NULO ou NEGATIVO.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int num,cont;
	
	cont = 0;
	do
	{
		printf("Digite um valor: ");
		scanf("%d", &num);
		
		if(num <= 0)
		{
			printf("FIM\n");
		}else
			if(num % 2 == 0)
			{
				printf("PAR\n");
			}else
				{
					printf("IMPAR\n");
				}
			
		cont++;
	}while(num > 1);
	
	
    system("pause");
}
