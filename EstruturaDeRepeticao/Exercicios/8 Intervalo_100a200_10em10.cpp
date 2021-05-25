/*
8.	Escreva um algoritmo que imprima os números de 100 a 200 de 10 em 10.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i;
	
	for(i = 100; i <= 200; i+=10)
	{
        printf("%d\n", i);
    }
    system("pause");
}
