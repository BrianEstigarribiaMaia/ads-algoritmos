/*
exemplo 2 de whilecomaparação de strings
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese"); //para usar acentos 
    char s [20]; //declaração de uma string
    
    printf("Digite uma palavra: \n"); //pede ao usuário uma string
    scanf ("%s",s); //leitura de uma string e atribui o valor digitado a variavel s
    
    if((strcmp(s,"teste") == 0))  //comparação de strings "s" e "teste"
        printf("Igual\n");
    else //senão
        printf("Diferente\n");  
	//pausa no sistema antes do termino do programa 
    system("pause");
}
