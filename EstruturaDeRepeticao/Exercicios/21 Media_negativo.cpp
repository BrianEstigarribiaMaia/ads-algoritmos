/*
21.	Construir um algoritmo que calcule a média aritmética de vários valores 
inteiros positivos, lidos externamente. O final da leitura acontecerá quando 
for lido um valor negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	
	int numero, cont=0, soma=0;
	float media;
	
	printf ("\nDigite um valor inteiro positivo. Digite um negativo para encerrar a execucao:");
	scanf ("%d", &numero);
	
	if (numero >=0)
	{
 	    do
 		{
 			soma=soma+numero;
			cont++;
 			printf ("\nDigite um valor inteiro positivo. Digite um negativo para encerrar a execucao: ");
 			scanf ("%d", &numero);
 		}while(numero>=0);
 		
 		if (cont>0) 
		{
			media=(float)soma/cont;
			printf ("\nA media eh %.2f\n", media);
 		}
	}//if
    system("pause");
}
