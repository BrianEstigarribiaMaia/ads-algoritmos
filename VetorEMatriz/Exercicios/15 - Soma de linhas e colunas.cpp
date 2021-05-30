/*
15-	Escrever um algoritmo que lê uma matriz M(5,5) e cria 2 vetores SL(5) e SC(5) que contenham, 
respectivamente, as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados.
*/


#include <stdio.h>
#include <stdlib.h>

main()
{
	int G[5][5], SL[5], SC[5], i, j;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
	{
	printf("Digite o elemento G[%d][%d]:",i,j);
	scanf("%d",&G[i][j]);
	}
	SL[i] = 0;
	SC[i] = 0;
	}
	for(i=0;i<=4;i++)
	for(j=0;j<=4;j++)
	{
	SL[i] = SL[i] + G[i][j];
	SC[i] = SC[i] + G[j][i];
	}
	printf("\n");
	for(i=0;i<=4;i++)
	{
	printf("SL[%d]=%3d ",i,SL[i]);
	}
	printf("\n");
	printf("\n");
	for(i=0;i<=4;i++)
	{
	printf("SC[%d]=%3d ",i,SC[i]);
	}
	system("pause");
}
