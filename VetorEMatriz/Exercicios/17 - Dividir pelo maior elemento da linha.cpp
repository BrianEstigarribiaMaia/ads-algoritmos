/*
17-	Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13 elementos de cada uma das 12 linhas de M
 pelo maior elemento em módulo daquela linha. Escrever a matriz lida e a modificada.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	float A[12][13];
	int i, j, maior;
	for(i=0;i<=11;i++)
	for(j=0;j<=12;j++)
	{
	printf("Digite o elemento A[%d][%d]:",i,j);
	scanf("%f",&A[i][j]);
	}
	for(i=0;i<=11;i++)
	{
	maior = A[i][0];
	for(j=1;j<=12;j++)
	{
	if (maior < A[i][j])
	{
	maior = A[i][j];
	}
	}
	printf("A[linha %d]/Maior: ",i);
	for(j=0;j<=12;j++)
	{
	printf("%6.2f ",A[i][j]/maior);
	}
	printf("\n");
	}
	system("pause");
}
