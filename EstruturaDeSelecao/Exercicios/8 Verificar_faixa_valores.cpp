/*
8.	Ler um valor numérico que esteja na faixa de valores de 1 até 9.
 O programa deve apresentar a mensagem "O valor está na faixa permitida", 
 caso o valor informado esteja entre 1 e 9. Se o valor estiver fora dessa faixa, 
 o programa deve apresentar a mensagem "O valor está fora da faixa permitida".
 ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int val = 1;
	
	printf("Digite um valor: ");
	scanf("%d",&val);
	
	if(val <= 9)
		printf("O valor está na faixa permitida\n");
	else
		printf("O valor está fora da faixa permitida\n");
			
	system("pause");
}  
