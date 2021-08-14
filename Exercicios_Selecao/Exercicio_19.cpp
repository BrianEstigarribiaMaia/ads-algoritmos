/*
16	Faça um algoritmo para ler dois números e imprimir o maior e 
o menor número lido, acompanhados da mensagem Menor ou Maior, conforme o caso. 
Se iguais, imprimir os dois números acompanhados da mensagem São iguais.
*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int numero_1,numero_2;
	
	printf("Digite dois números: ");
	scanf("%d %d",&numero_1,&numero_2);

	
	if(numero_1 > numero_2)
	{
		printf("Número : %d é maior\n",numero_1);
		printf("Número : %d é menor\n",numero_2);
	}else
		if(numero_1 < numero_2)
		{
			printf("Número : %d é maior\n",numero_2);
			printf("Número : %d é menor\n",numero_1);
		}else
			if(numero_1 == numero_2 || numero_2 == numero_1)
			{
				printf("Os números %d e %d sao iguais! ",numero_1,numero_2);
			}
	
	system("pause");	
}
