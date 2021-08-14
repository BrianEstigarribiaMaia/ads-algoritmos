/*
12.	Escreva um algoritmo para ler 2 valores (considere que não serão lidos 
valores iguais) e escreve-los em ordem crescente.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	
	printf("Digite um valor: "); 
	scanf("%d",&a);
	
	printf("Digite outro valor: "); 
	scanf("%d",&b);
	
	if (a < b)
	{
		printf("%d\n",a);
		printf("%d\n",b);
	}
	else
	{
		printf("%d\n",b);
		printf("%d\n",a);
	}
	
	system("pause");
}
