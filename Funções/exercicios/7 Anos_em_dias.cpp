/*
7.	Faça uma função que recebe a idade de uma pessoa em anos e retorna essa idade expressa em dias. 
*/

#include <stdio.h>
#include <stdlib.h>

int convertedias(int anos, int meses, int dias){
int dias2;
dias2 = (anos * 365) + (meses * 30) + dias;
printf("Sua idade em dias e %d\n", dias2);
}
 
int main()
{
int anos, meses, dias;
printf("Informe a idade em anos, meses e dias\n");
scanf("%d %d %d", &anos, &meses, &dias);
convertedias(anos, meses, dias);
return 0;
}

