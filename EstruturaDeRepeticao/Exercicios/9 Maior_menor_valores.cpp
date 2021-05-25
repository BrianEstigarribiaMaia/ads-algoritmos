/*
9.	Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.
ERRO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");

	int i,num,maior,menor;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	maior = num;
	menor = num;
	
	for(i=0;i<2;i++)
	{
		printf("Digite um número: "); 
		scanf("%d",&num);
		
		if(num > maior)
		{
			maior = num;
		}else
			if(num < menor)
			{
				menor = num;
			}
	}
	
	printf ("o maior numero e %d e o menor e %d\n", maior, menor);
    
    system("pause");
}
