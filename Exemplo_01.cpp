/*
  Exemplo de if com operadores relacionais
  ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos
    int numero; //declaração de váriaveis 
      
    printf ("Informe um número: "); //pede que o usuário digite um valor 
    scanf ("%d",&numero); //pega o valor e armazena na váriavel numero
      
    if(numero >= 20 && numero <= 90) //condição do intervalo de números aceitos
        printf("Número válido, está no intervalo.\n");
    else //senão
    	printf("Número inaválido.\n");  
	//pausa no sistema antes do termino do programa 	  
    system("pause");
    return 0;
}      
