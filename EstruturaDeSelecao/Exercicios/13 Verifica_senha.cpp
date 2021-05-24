/*
13.	Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. 
A senha válida é o número 1234. Deve ser impresso as seguintes mensagens: 

ACESSO PERMITIDO caso a senha seja válida. 
ACESSO NEGADO  caso a senha seja inválida.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int senha = 1234;
	int num;
	
	printf("Digite a senha: ");
	scanf("%d",&num);
	
	if(num != senha)
		printf("senha incorreta ACESSO NEGADO\n");
	else
		printf("senha correta ACESSO PERMITIDO\n");	
	
	system("pause");
}
