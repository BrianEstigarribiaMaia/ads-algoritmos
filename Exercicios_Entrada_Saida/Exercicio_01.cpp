/*-------------------------------------
Mostrar operações aritméticas na tela
ok
--------------------------------------*/

//bibliotecas necessárias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//método príncipal(inicio do programa)
int main()
{//inicio do código
	setlocale(LC_ALL,"Portuguese");
	//declaração de variaveis 
	int a,b;
	float x,y;
	//atribuição de valores a variaveis 
	a = 1;
	b = a + 2;
	x = a / b;
	b = b + 1;
	a = a - 1;
	y = b / 2;
	a = a + 2;
	y = b % (a + 1);
	//mostrar valores das atribuições na tela 
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%.1f\n",x);
	printf("%.1f\n",y);
	//pausa antes do termino do programa 
	system("pause");
}//fim do código e do programa
