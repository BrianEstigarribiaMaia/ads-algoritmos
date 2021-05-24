/*
6.Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, 
calcular e escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem "APROVADO". 
Se a média for menor que 6.0 e maior que 3.0, imprimir a mensagem "EXAME",
 se a média for menor que 3.0 imprimir a mensagem "REPROVADO".
 ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,media;
	
	printf("Informe a primeira nota: ");
	scanf("%f",&n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f",&n2);
	
	media = (n1 + n2) / 2;
	
	printf("Media: %5.2f\n",media);
	
	if(media >= 6)
		printf("APROVADO\n");
	else
		if (media < 6 && media > 3)
			printf("EXAME\n");
		else
			printf("REPROVADO\n");		
	
	system("pause");
}  
