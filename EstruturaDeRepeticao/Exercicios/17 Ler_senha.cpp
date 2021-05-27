/*
17.	Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. 
Para cada leitura da senha incorreta informada escrever a mensagem "SENHA INVÁLIDA". 
Quanto a senha for informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO"
 e o algoritmo encerrado. Considere que a senha correta é o valor 2807.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int senha_correta = 2807;
	int senha,i;
	
	i = 1;
	while(senha != senha_correta)
	{
		printf("Digite uma senha: ");
		scanf("%d",&senha);
		
		if(senha == senha_correta)
		{
			printf("ACESSO PERMITIDO\n");
		}else
			{
				printf("SENHA INVALIDA\n");
			}
			
		i++;
	}
	
    system("pause");
}
