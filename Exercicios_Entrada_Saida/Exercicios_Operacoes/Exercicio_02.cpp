/*---------------------------
ordem e impressão de números 
ok
----------------------------*/

//bibliotecas necessárias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val1,val2,val3; //declaração de variaveis 
	//atribuindo diferentes valores as váriaveis 
	val1 = 10;
	val2 = 20;
	val3 = val2 - val1;
	val3 = val1 - val2;
	//mostrar resultado das atribuições na tela 
	printf("%d\n",val1); // 10
	printf("%d\n",val2); // 20
	printf("%d\n",val3); //-10
	//pausa no sistema antes do termino do programa 
	system("pause");
}
