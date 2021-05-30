/*
Faça um algoritmo que leia um vetor de 80 posições e encontre o menor valor.
 Mostre-o juntamente com seu número de ordem (posição).
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int v[8];
    int i   = 0;
    int men = 0;
    int aux = 0;
    int in  = 0;
    
    
    printf("Escreva 80 números: ");
    
    for (i=0;i<8;i++)
    {
        scanf("%d",&v[i]);
        aux = v[i] + aux;
    }
    
    for (i=0;i<8;i++)
    {
        if(v[i] <= aux)
        {
            aux = v[i];
            in  = i;
            men = v[i];
        }
    }
    in++;
    
    printf("Menor valalor = %d e sua posição é = [%d]\n",men,in);
    
    system("pause");
}
