/*
Faça um programa que escreva seu nome, 
endereço e telefone, utilizando mais de um printf.
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
	printf("Nome: Brian Estigarribia\n");
	printf("Endereco: Rua A, número :123\n");
	printf("Telefone: (51) 3333 4444\n");
	//pausa no sistema antes do termino do programa
	system("pause"); 
	return 0;
}
