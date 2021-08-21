/*-------------------------------------------------------------------
Atribuir diferentes valores a uma mesma váriavel e mostrar resultado.
ok
-------------------------------------------------------------------*/

//bibliotecas necessárias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //defindo variaveis 
	int Prim,Seg,Ter;
	//atribuido diferentes valores a uma mesma variavel 
	Prim = 5;
	Seg  = Prim;
	Ter  = Seg;
	Prim = 8;
	//mostrar sequencias de atribuições a uma mesma váriavel na execução do programa
	printf("%d\n",Prim); //8
	printf("%d\n",Seg ); //5
	printf("%d\n",Ter ); //5
	//pausa no sistema antes do termino do programa 
	system("pause");
}
