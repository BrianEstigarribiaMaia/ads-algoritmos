/*----------------------------------------------------------------------
  3 Escreva um algoritmo para ler o número de eleitores de um município, 
  o número de votos brancos, nulos e válidos. Calcular e escrever o 
  percentual que cada um representa em relação ao total de eleitores.
  ok
-----------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese"); //para usar acentos 
	int eleitores,brancos,nulos,validos;        //declaração de váriaveis 
	float perc_brancos,perc_nulos,perc_validos;
	
	printf("Informe o número de eleitores:      \n"); //pede ao usuario um valor 
	scanf ("%d",&eleitores); //le o valor digitado e armazena na váriavel eleitores
	 
	printf("Informe o número de votos validos:  \n"); //pede ao usuario um valor 
	scanf ("%d",&validos); //le o valor digitado e armazena na váriavel validos
	
	printf("Informe o número de votos em branco:\n"); //pede ao usuario um valor 
	scanf ("%d",&brancos); //le o valor digitado e armazena na váriavel brancos
	
	printf("Informe o número de votos nulos :   \n"); //pede ao usuario um valor 
	scanf ("%d",&nulos); //le o valor digitado e armazena na váriavel nulos
	//atribuindo operações as váriveis 
	perc_validos = (float(validos) / eleitores) * 100;
	perc_brancos = (float(brancos) / eleitores) * 100;
	perc_nulos   = (float(nulos)   / eleitores) * 100;
	//mostra resultado do operação/processamento
	printf("%5.2f%% de votos válidos.  \n",perc_validos);
	printf("%5.2f%% de votos em branco.\n",perc_brancos);
	printf("%5.2f%% de votos nulos.    \n",perc_nulos);
	//pausa no sistema antes do termino do programa 
	system("pause");
}
