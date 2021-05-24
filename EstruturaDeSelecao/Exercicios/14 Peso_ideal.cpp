/*
14.	Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino  2:masculino) 
de uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas: 

para homens:   (72.7 * h)-58 
para mulheres:  (62.1*h)-44.7 
ok
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	float altura,peso;
	char sexo;
	
	printf("Qual a sua altura? "); 
	scanf("%f",&altura);
	
	printf("Qual o seu sexo (f/m)? ");
	sexo = getchar();
	
	if (sexo == 'f')
		peso = (62.1 * altura) - 44.7;
	else
		peso = (72.7 * altura) - 58;
		
	printf("Seu peso ideal e : %5.2f\n",peso);
}
