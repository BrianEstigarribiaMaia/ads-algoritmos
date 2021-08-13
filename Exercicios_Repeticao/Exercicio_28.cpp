/*
16.	Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). 
Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. 
A repetição será encerrada ao ser fornecido para os elementos da dupla valores iguais.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int val1,val2;
	
	while(val1 != val2)
	{
        printf("Digite dois números: \n");
        scanf("%d %d",&val1,&val2);
        
        if(val1 < val2)
            printf("Ordem crescente\n");
        else
            printf("Ordem decrescente\n");
    }   
        
    system("pause");
}
