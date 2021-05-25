/*
Escrever a palavra PROGRAMACAO 5x na tela
ok
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int contador = 0;
    
    while(contador<=5)
    {
        printf("PROGRAMACAO\n");
        contador++;
    }
    
    system("pause");
}
