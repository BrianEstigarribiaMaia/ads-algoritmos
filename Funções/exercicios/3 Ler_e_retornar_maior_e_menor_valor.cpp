/*
3.	Faça uma procedure que lê 50 valores inteiros e retorna o maior e o menor deles. 
*/

#include <stdio.h>
#include <stdlib.h>

void maior_e_menor()
{
	int i,num,maior,menor;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	maior = num;
	menor = num;
	
	for(i=1;i<=4;i++)
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
}

main()
{
	maior_e_menor();
	system("pause");
}
