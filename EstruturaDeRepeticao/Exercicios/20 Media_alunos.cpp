/*
20.	Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe.
 O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n1,n2,n3,cod;
	float media;
	
	do
	{
		printf("Digite 3 notas: \n");
		scanf("%d %d %d",&n1,&n2,&n3);
		
		printf("Digite o codigo do aluno: \n");
		scanf("%d",&cod);
		
		media = (n1+n2+n3)/3;
		
		printf("Media = %.2f\n",media);
	}while(cod != 0);
	
	
    system("pause");
}
