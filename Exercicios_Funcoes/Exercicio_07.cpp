/*

11.	Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela abaixo: 
Nota 	      Conceito 
de 0,0 a 4,9 	D 
de 5,0 a 6,9 	C 
de 7,0 a 8,9 	B 
de 9,0 a 10,0 	A

*/
#include <stdlib.h>
#include <stdio.h>

int  conceito (int media){
if (media >= 0 && media <= 49)
printf("Conceito D");
else if (media <= 69)
printf("Conceito C");
else if (media <= 89)
printf("Conceito B");
else if (media <= 100)
printf("Conceito A");
else
printf("Valor de entrada incorreto");
 
}
 
int main()
{
int media;
printf("Entre com a media\n");
scanf("%d", &media);
conceito(media);
return 0;
}
