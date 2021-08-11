/*
1. Fazer um algoritmo para receber números decimais até que o usuário digite 0 e fazer a média aritmética desses números. 
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    float num,cont;
    
    cont = 0;
    do
    {
        printf("Digite um número decimal: ");
        scanf("%f",&num);
        cont++;
    } 
    while(num != 0);
    
    system("pause");
}
