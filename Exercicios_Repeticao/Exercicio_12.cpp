/*
5.	Faça um programa que leia o dia da semana (Domingo, Segunda, Terça, Quarta, Quinta, Sexta e Sabado). 
Esse dia deve ser um texto. Se for Sábado ou Domingo imprimir "Final de Semana", senão imprimir "Dia Útil". 
Dica: Utilizar a função de comparação de string strcmp
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char dia[10];
    
    printf("Digite o dia da semana: ");
    scanf("%s",&dia);
    
    if((strcmp(dia,"Sabado") == 0) || (strcmp(dia,"Domingo") == 0))  //comparação de strings "s" e "teste"
        printf("Final de Semana\n");
    else //senão
        printf("Dia util\n");  
            
    system("pause");
}
