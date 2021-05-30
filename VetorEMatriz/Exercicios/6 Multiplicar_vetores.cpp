/*
Escreva um algoritmo que leia dois vetores de 10 posições e faça
 a multiplicação dos elementos de mesmo índice, colocando o resultado 
 em um terceiro vetor. Mostre o vetor resultante.
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int a [10];
    int b [10];
    int res [10];
    int i;

    printf("PREENCHA O VETOR A \n\n");
    for (i=0;i<=10;i++)  //vetor a
    {
        printf("a [%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("PREENCHA O VETOR B \n\n");
    for (i=0;i<=10;i++)  //vetor b
    {
        printf("b [%d] = ",i);
        scanf("%d",&b[i]);
    }
    printf("\n");
    printf("MULTIPLICAÇÃO DOS VETORES A B \n\n");
    for (i=0;i<=10;i++)  //vetor res
    {
        res[i] = a[i]*b[i];
        printf("c [%d] = %d\n",i,res[i]); 
    }
    
    
    system("pause");
}
