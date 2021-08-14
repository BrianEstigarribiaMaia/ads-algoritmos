/*
9 Ler um vetor M de 10 elementos. Troque a seguir o 1º. 
elemento com o 6 º., o 2 º. com o 7 º., etc. até o 5 º. com 10 º. e 
escreva o vetor M assim modificado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,aux;
	int m[10];
	
	for (i=0;i<10;i++)
	{
		printf("m [%d] = ",i);
		scanf("%d",&m[i]);
	}
	
	for (i=0;i<5;i++)
	{
		aux    = m[i];
		m[i]   = m[i+5];
		m[i+5] = aux;
	}
	
	printf("\n");
	
	for (i=0;i<10;i++)
		printf("m [%d] = %d\n",i,m[i]);
		
	system("pause");
}
