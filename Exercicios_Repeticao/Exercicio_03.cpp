/*
2. Fazer um algoritmo para receber um número decimal 
e o peso de cada número até que o usuário digite o número 0.
 Fazer a média ponderada desses números e pesos respectivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    float num,peso,media;

    do{
    	printf("Digite um número decimal: ");
    	scanf("%d",&num);
    	
    	printf("Digite o peso deste número: ");
    	scanf("%d",&peso);

	}while(num != 0);
	
	media = (num+num)/peso;
	
	printf("A média dos números digitados é: %5.2f \n",media);
	
    system("pause");
}
