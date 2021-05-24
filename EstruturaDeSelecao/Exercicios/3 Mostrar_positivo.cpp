/*
3.Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo
 e apresentar o valor lido como sendo um valor positivo, ou seja, se o valor lido 
 for menor ou igual a zero, ele deve ser multiplicado por -1.
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int val,val_neg;
    
    printf("Digite um valor: ");
    scanf("%d",&val);
    
    val_neg = val * (-1);
    
    if (val <= 0)
    	printf("Valor digitado negativo * (-1) = %d\n",val_neg);
    else	
    	printf("O valor é: %d\n",val);
    
	system("pause");
}  
