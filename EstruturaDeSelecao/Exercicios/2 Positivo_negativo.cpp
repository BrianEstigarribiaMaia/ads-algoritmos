/*
2.Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. 
Considere o valor zero como positivo
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    float val;
    
    printf("Digite um valor: ");
    scanf("%f",&val);
    
    if (val >= 0)
    	printf("VALOR DIGITADO É POSITIVO \n");
    else
		printf("VALOR DIGITADO É NEGATIVO \n");	
    
    system("pause");
}
