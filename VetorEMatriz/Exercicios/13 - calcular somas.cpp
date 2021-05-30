/*
13-	Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
a)	da linha 4 de M
b)	da coluna 2 de M
c)	da diagonal principal
d)	todos os elementos da matriz M
Escrever essas somas e a matriz.


*/


#include <stdio.h>
#include <stdlib.h>

main()
{
	int M[5][5], i, j, soma;
	for(i=0;i<=4;i++)
	
		for(j=0;j<=4;j++)
		{
		printf("Digite o elemento M[%d][%d]:",i,j);
		scanf("%d",&M[i][j]);
		}
		
		soma = 0;
		for(i=0;i<=4;i++)
		{
			soma = soma + M[3][i]; /*considerando a linha 1 com indice 0 */
		}
		printf("\na) Soma dos elementos da linha 4: %d",soma);
		
		soma = 0;
		for(i=0;i<=4;i++)
		{
			soma = soma + M[i][1]; /*considerando a coluna 1 com indice 0 */
		}
		printf("\nb) Soma dos elementos da coluna 2: %d",soma);
		
		soma = 0;
		for(i=0;i<=4;i++)
		{
		soma = soma + M[i][i]; /*considerando a linha 1 com indice 0 */
		}
		printf("\nc) Soma dos elementos da diagonal principal: %d",soma);
		
		soma = 0;
		for(i=0;i<=4;i++)
		{
		soma = soma + M[i][4-i]; /*considerando a linha 1 com indice 0 */
		}
		printf("\nd) Soma dos elementos da diagonal secundaria: %d",soma);
		
		soma = 0;
		for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
		{
		soma = soma + M[i][j]; /*considerando a linha 1 com indice 0 */
		}
		printf("\ne) Soma de todos os elementos da matriz: %d",soma);
		
		system("pause");
}
