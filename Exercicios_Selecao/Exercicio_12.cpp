/*
9.	Escreva um algoritmo para ler o ano de nascimento de uma pessoa e 
escrever uma mensagem que diga se ela poderá ou não votar este ano 
(não é necessário considerar o mês em que ela nasceu). 
ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float ano;
	
	printf("Informe o ano de nascimento: ");
	scanf("%f",&ano);
	
	if (ano <= 1998)
		printf("Permitido votar\n");
	else
		printf("Nao é permitido votar\n");	
	system("pause");
}  
