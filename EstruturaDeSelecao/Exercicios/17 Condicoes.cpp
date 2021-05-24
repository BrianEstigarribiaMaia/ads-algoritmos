/*
17.	Ler dois números inteiros.  Se forem iguais, imprimir a mensagem 'São iguais' 
e terminar o programa. Se forem diferentes, e o primeiro deles for par, ler um 
terceiro número, imprimir o maior valor existente entre os três e terminar; todavia, 
se o primeiro for ímpar, ler mais dois números e imprimir o maior entre os dois primeiros
e o maior valor existente entre estes dois últimos, mas de modo que não apareçam na tela
em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n1,n2,n3,n4;
	
	printf("Digite dois números: ");
	scanf("%d %d",&n1,&n2);
	
	if(n1 == n2)
	{
		printf("Sao iguais");
	}else
		if(n1 != n2)
		{
			if(n1 % 2 == 0)
			{
				printf("Digite um terceiro número: ");
				scanf("%d",&n3);
				
				if(n3 > n2 && n3 > n1)
				{
					printf("O maior é: %d",n3);
				}else
					if(n2 > n3 && n2 > n1)
					{
						printf("O maior é: %d",n2);
					}else
						if (n1 > n2 && n1 > n3)
						{
							printf("O maior é: %d",n2);
						}	
			}else
				{
					printf("Digite mais dois números: ");
					scanf("%d %d",&n3,&n4);
					
					if(n3 > n4)
					{
						printf("O maior número digitado dos ultimos foi %d\n",n3);
					}else
						{
							printf("O maior número digitado dos ultimos foi %d\n",n4);
						}if(n1 > n2)
							{
								printf("O maior número digitado dos primeiros foi %d\n",n1);
							}else
								{
									printf("O maior número digitado dos primeiros foi %d\n",n2);
								}
				}
		}else
	system("pause");	
}
