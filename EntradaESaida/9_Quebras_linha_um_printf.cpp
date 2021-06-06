/*Faça um programa que escreva seu nome, seu código de aluno e curso,
 utilizando apenas um printf.
 ok
*/

//biliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	//mostrar mensagens na tela com quebras de linha
	printf("Nome:Brian Estigarribia\nCód_Aluno:019281\nCurso:ADS\n");
	//pausa no sistema antes do termino do programa 
	system("pause"); 
	return 0;
}
