/*-----------------------------------------------------------------------
7.	Faça um algoritmo que leia tres notas de 5 de alunos. 
Calcule e mostre:
a.	A média de cada aluno;
b.	O total de alunos reprovados;
c.	O total de alunos aprovados
d.	A média da turma
Obs.:	Considere média >= 7 aprovados e caso contrário reprovados. 
Para calcular a m?dia final descarte a nota mais baixa e 
duplique a nota mais alta.
ok
-------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

main(){
	int cont, cont_apr = 0, cont_rep = 0;
	float n1, n2, n3, media, maior, menor, soma = 0;
	
	for (cont = 1; cont <=5; cont++)
	{
		printf("Digite a nota 1\n");
		scanf("%f", &n1);
		printf("Digite a nota 2\n");
		scanf("%f", &n2);
		printf("Digite a nota 3\n");
		scanf("%f", &n3);
		media = (n1 + n2 + n3)/3;
		printf("A media do aluno %d eh %4.2f\n", cont, media);
		if (media >= 7)
			cont_apr ++;
		else
			cont_rep++;
			
		soma = soma + n1 + n2 + n3;
			
		if (cont == 1) //é o 1 aluno
			{
			menor = n1;
			maior = n1;
			
			if (n2 < menor)
				menor = n2;
			if (n3 < menor)
				menor = n3;
			
			if (n2 > maior)
				maior = n2;
			if (n3 > maior)
				maior = n3;	
			}		
		else //não é o 1 aluno ?
		{
			if (n1 < menor)
				menor = n1;
			if (n2 < menor)
				menor = n2;
			if (n3 < menor)
				menor = n3;

			if (n1 > maior)
				maior = n1;
			if (n2 > maior)
				maior = n2;
			if (n3 > maior)
				maior = n3;

		}
	
	}//fim do for
	
	soma = soma - menor + maior;
	
	printf("O total de alunos reprovados eh %d\n", cont_rep);
	printf("O total de alunos aprovados eh %d\n", cont_apr);
	printf("A media da turma eh %4.2f\n", soma/15.0 );
	system("pause");
	
}
