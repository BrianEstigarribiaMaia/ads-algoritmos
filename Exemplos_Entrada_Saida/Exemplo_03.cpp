 /*Fazer um programa que recebe 2 variáveis inteiras e deve fazer a média aritmética. Imprimir o valor da
média.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	int n1,n2;   //declaração de váriaveis 
	float media;
	
	printf("Digite n1:\n"); //pede que o usuário digite um número 
	scanf("%d",&n1); //pega número digitado e armazena na váriavel n1
	
	printf("Digite n2:\n"); //pede que o usuário digite um número 
	scanf("%d",&n2); //pega número digitado e armazena na váriavel n2
	
	media = (n1+n2)/2.0; //calculo da média 
	//mostrar resultado do calculo na tela 
	printf("A média e: %.2f\n",media);
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
