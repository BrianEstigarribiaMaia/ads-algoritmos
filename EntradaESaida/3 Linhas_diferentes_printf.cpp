/*Faça um programa que escreva, em linhas diferentes, o seu nome e o sobrenome, utilizando
mais de um printf.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	//mostrar mensagens na tela 
	printf("Brian\n");
	printf("Estigarribia\n");
	//pausa no sistema antes do termino do programa 
	system("pause"); 
	return 0;
}
