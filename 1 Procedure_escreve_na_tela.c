/*Programa que pede um numero e escreve na tela
  a ordem decrescente até esse numero
*/

#include <stdio.h>
#include <stdlib.h>

int num, n;

void escreve_na_tela()
{
    for(num=1;num<=n;num++)
    {
        printf("%d\n",num);
    }
}

main()
{
    scanf("%d",&n);
    escreve_na_tela();
    printf("Fim\n");

    system("pause");
}
