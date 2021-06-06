/*Faça um programa que escreva, em linhas diferentes, o seu nome e o sobrenome, utilizando
apenas um printf
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese"); // para utilização de acentos 
	//mostrar mensagens na tela 
	printf("Brian\nEstigarribia\n");
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
