/*
Escreva um algoritmo que leia e mostre um vetor de 20 elementos
 inteiros. A seguir, conte quantos valores pares existem no 
 vetor.
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int v[20];
    int i, cont = 0;
    
    printf("Digite 20 números inteiros:\n");
    
    for(i=1;i<=20;i++)            //ler 20 números 
    {
        printf("Entre com o número",i);
        scanf("%d",&v[i]);
    }
    
    for(i=1;i<=20;i++)            //contar pares 
    {
        if(v[i] % 2 == 0)
        cont++;
    }
    
    printf("A quantidade de valores pares no vetor é : %d\n",cont);
    system("pause");
}
