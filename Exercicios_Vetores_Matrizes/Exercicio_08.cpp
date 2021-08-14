/*
Escreva um algoritmo que leia um vetor de 50 posições de números 
inteiros e mostre somente os positivos com suas respectivas posições.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int num[5];
    int cont;
    
    printf("Digite 50 números\n");
    for (cont=0;cont<=5;cont++)
    {
        printf("Digite um número: ");
        scanf("%d",&num[cont]);
    }
    
    for (cont=0;cont<=5;cont++)
    {
        if(num[cont] > 0)
            printf("a[%d] = %d\n",
            cont,num[cont]);
    }
    
    system("pause");
}
