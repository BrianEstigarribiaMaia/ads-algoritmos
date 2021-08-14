/*
Faça um algoritmo que leia 100 números inteiros. Distribua os números 
lidos em dois vetores, sendo um para pares e outro para ímpares. Escreva os vetores.
*/

#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int par[10], impar[10], numero;
    int cont_par=0, cont_impar=0;
    int x=0;
 
    do
    {
      system("cls");
 
      printf("Digite um numero : ");
      scanf("%d",&numero); fflush(stdin);
 
      if(numero==0)
        break;   
      else 
		if(numero%2==0)
	    {
	       par[cont_par] = numero;     
	       cont_par++;
	    }
	    else
	    {
	       impar[cont_impar] = numero;
	       cont_impar++;    
	    }
    }
    while(cont_par<10 && cont_impar<10);
 
    printf("\n\n\nResultados :\n\n");
 
    printf("vetor par   -> ");
    for(x=0;x<cont_par;x++)
      printf("%d ",par[x]);
 
    printf("\nvetor impar -> ");
    for(x=0;x<cont_impar;x++)
      printf("%d ",impar[x]);
 
    fflush(stdin);
    getchar();
    return(0);
}
