/*
2.Construa uma função que verifique se um número inteiro, passado como parâmetro, é par,
 retornando  1 se verdadeiro e 2 caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int e_par(int num)
{

	if(num % 2 == 0)
	{
		return 1;
	}else
		{
			return 2;
		}
}
main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	num = e_par(num);
	
	printf("%d\n",num);
	
	system("pause");
}
