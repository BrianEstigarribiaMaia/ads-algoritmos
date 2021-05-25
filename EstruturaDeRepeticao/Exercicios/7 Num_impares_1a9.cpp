/*
7.	Escreva um algoritmo que imprima os números 
ímpares existentes de entre 1(inclusive) e 9 (inclusive).
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n,imp = 1;
	
	for(n = 0; n <= 9; imp++, n++)
	{
		if(imp % 2 != 0)
		{
			printf("%d\n",imp);
		}
	}
    system("pause");
}
