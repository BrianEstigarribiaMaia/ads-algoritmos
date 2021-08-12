/*
6.	Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i, num = 101;
	
	for(i  = 1;  i <= 10; i++)
	{
        printf("%d\n",num);
        num++;
    }
	
    system("pause");
}
