/* Fazer um programa que recebe 2 variáveis do tipo float e as seguintes operações: soma, subtração,
multiplicação, divisão e raiz quadrada de cada uma das variáveis. Retornar o valor de cada operação.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	float n1,n2; //declaração de váriaveis 
		
	printf("Digite um número n1: \n"); //pede ao usuraio para digitar um número
	scanf("%f",&n1); //pega o número digitado e armazena na váriavel n1
	
	printf("Digite outro número n2: \n"); //pede ao usuraio para digitar um número
	scanf("%f",&n2); //pega o número digitado e armazena na váriavel n2
	
	//mostrar resultado de calculos com as variaveis 
	printf("Soma de n1+n2 = %5.2f\n",n1+n2);          
	printf("Subtracao de n1-n2 = %5.2f\n",n1-n2);     
	printf("Multiplicacao de n1*n2 = %5.2f\n",n1*n2); 
	printf("Divisao de n1/n2 = %5.2f\n",n1/n2);       
	printf("Raiz de n1 = %5.2f\n",sqrt(n1));          
	printf("Raiz de n2 = %5.2f\n",sqrt(n2));          
	//pausa no sistema antes do termino do programa 
	system("pause"); 
	return 0;
}
