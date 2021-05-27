/*
19.	Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares.
 Termine a leitura se o usuário digitar zero (0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	
	int n1,n2;
	float media;
	
	
	do
	{
		printf("Digite um numero: \n");
		scanf("%d",&n1);
		
		printf("Digite outro numero: \n");
		scanf("%d",&n2);
		
		if(n1 %2 ==0 && n2 %2== 0)
		{
			media = (n1+n2)/2;
			printf("A media eh : %.2f\n",media);
		}
		
		
	}while(n1 != 0 && n2 !=0);
	
    system("pause");
}
