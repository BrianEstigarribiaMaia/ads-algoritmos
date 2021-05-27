/*
13.	Programa para gerar e imprimir os números pares menores que 51 e sua soma. 
Os números devem ser impressos em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,num;
	
;
	
	for(i=1,num=51;num >= i;num--)
	{
		if(num % 2 == 0)
		{
			printf("%d\n",num+num);
		}
	}
    system("pause");
}
