/*
  exemplo 02 de if else com expresões lógicas
  ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
	char sexo; //declaração de váriaveis 
      
    printf ("Informe o sexo: "); //pede ao usuário a digitação de um caracter 
    scanf("%c",&sexo); //pega o caractere digitado e armazena na váriavel sexo 
      
    if(sexo == 'M' || sexo == 'm' || sexo == 'F'|| sexo == 'f') //condição e comparação de strings digitadas 
         printf("Sexo válido\n");
    else //senão
        printf("Sexo inválido\n");
    //pausa no sistema antes do termino do programa     
    system("pause");    
	return 0;            
}      
