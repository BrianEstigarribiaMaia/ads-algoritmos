/*
24.	Programa para ler a nota de cada aluno de uma turma de 37 alunos e 
calcular a média da turma. Achar e imprimir, também, a maior e a menor nota da turma.     
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i;
	float nota = 0.0, media = 0.0, media_turma = 0.0, maior_nota = 0.0, menor_nota = 0.0;
	
	for(i = 0;i < 37;i++){
		  printf("Digite a nota do aluno: ");
		  scanf("%d",&nota);
		  
		  maior_nota = nota;
		  menor_nota = nota;
		  
		  if(nota > maior_nota){
		  		  printf("%f",maior_nota);
		  }else if(nota < menor_nota){
		  		  printf("%f",menor_nota);
  		  }
		  
		  
    } 
	
    system("pause");
    return 0;
}
