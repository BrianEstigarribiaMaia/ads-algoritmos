/*Fazer um programa que recebe 3 variáveis do tipo float e faz a média ponderada. O 1º valor tem peso 1, o 2º
valor tem peso 3 e o 3º valor tem peso 2.
ok
*/

//bibliotecas para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para uso de acentos 
	float v1,v2,v3,media; //declaração de variáveis 
	
	printf("Digite média1 :\n"); //pede um número ao usuário 
	scanf("%f",&v1); //pega o número digitado e armazena na váriavel v1
	
	printf("Digite média2 :\n"); //pede um número ao usuário 
	scanf("%f",&v2); //pega o número digitado e armazena na váriavel v2
	
	printf("Digite média3 :\n"); //pede um número ao usuário 
	scanf("%f",&v3); //pega o número digitado e armazena na váriavel v3
	
	media = (v1*1+v2*3+v3*2)/(1+2+3); //calculo da média 
	//mostrar resultado do calculo na tela 
	printf("Média: %.2f\n",media);
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
