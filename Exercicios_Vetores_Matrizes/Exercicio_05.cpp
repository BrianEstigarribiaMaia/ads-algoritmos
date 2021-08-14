/*
4 Preencher um vetor B de 10 elementos com o número 10 se o índice do elemento for ímpar,
 e com o número 20 se for par. Escrever o vetor B após o seu total preenchimento.
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i;
	int b[10];
	
	for (i=0;i<10;i++)
		if (i%2 == 1)
			b[i] = 10;
		else
			b[i] = 20;
	
	for (i=0;i<10;i++)
		printf("b [%d] = %d\n",i,b[i]);
					
	system("pause");
}
