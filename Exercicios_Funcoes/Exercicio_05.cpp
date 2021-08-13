/*
5.	Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor. 
*/

#include <stdio.h>
#include <stdlib.h>

int divisores(int num)
{
	for(int i = num;i!=0;i--)
	{
  		if(num%i == 0)
  		{
  			printf("%d\n",i);
		}
	}
}

main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("Lista de divisores de valor digitado\n");
	divisores(num);
	
	system("pause");
}
