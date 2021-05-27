/*
12.	Escreva um algoritmo que gere os números de 1000 a 1999 e escreva aqueles que, 
divididos por 11, dão resto igual a 5.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i;
	
	for(i = 1000; i <= 1999; i++)
	{
        if(i % 11 == 5)
            printf("%d\n",i);
    }
    system("pause");
}
