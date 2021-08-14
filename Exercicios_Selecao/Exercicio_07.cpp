/*
4.Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, 
calcular e escrever a média semestral e a seguinte mensagem: 'PARABÉNS! Você foi aprovado' 
somente se o aluno foi aprovado (considere 6.0 a nota mínima para aprovação). 

'Você foi REPROVADO! Estude mais' caso a média calculada seja menor que 6,0.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,media;
	
	printf("Informe a primeira nota : ");
	scanf("%f",&n1);
	
	printf("Informe a segunda nota : ");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	if (media >= 6)
		printf("PARABÉNS! Você foi aprovado\n");
	else 
		printf("Você foi REPROVADO! Estude mais\n");
		
	printf("Média : %5.2f\n",media);		

	system("pause");
}  
