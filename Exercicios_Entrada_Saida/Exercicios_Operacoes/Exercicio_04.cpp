/*-------------------------------
Atribuição de valores e operações
ok
--------------------------------*/

//bibliotecas necessárias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    //definição de variaveis       
	int a,b,c,d; 
	//atribuindo valores 
	a = 10;
	b = 20;
	//atribuindo operações 
	d = a + a;
	c = a + b;
	a = b + c;
	d = d + 1;
	//mostrando resultados na tela 
	printf("%d\n",a); //50
	printf("%d\n",b); //20
	printf("%d\n",c); //30
	printf("%d\n",c); //30
	printf("%d\n",d); //21
	//pausa no sistema antes do termino do programa 
	system("pause"); 
}
