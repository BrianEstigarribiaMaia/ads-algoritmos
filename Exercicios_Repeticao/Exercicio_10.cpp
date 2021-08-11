/*-----------------------------------------------------------------
4.	Ler um número inteiro N (só aceitar valores positivos. 
Caso o N não seja positivo deverá ser lido um novo valor para o N) 
e escrever os divisores de N
ok ERRO
------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    int num,contador; //declaração de váriaveis 
    
    do
    {
        printf("Entre com um numero: ");
        scanf("%d",&num);
    }while (num <=0);
    
    printf("Os divisores de %d sao: ",num);
    
    for(contador = 1; contador <= num; contador++)
        if(num%contador == 0)
            printf("%d\n");
    //pausa no sistema antes do termino do programa  
    system("pause");
}
