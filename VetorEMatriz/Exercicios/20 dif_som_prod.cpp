/*
20 Escrever um algoritmo que lê 2 vetores X(10) e Y(10) e os escreve. Crie, a seguir, um vetor Z que seja:

a) a diferença entre X e Y (nos mesmos índices);
b) a soma entre X e Y (nos mesmos índices);
c) o produto entre X e Y (nos mesmos índices);

Escreva o vetor Z a cada cálculo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int x[10],y[10],diferenca[10],produto[10],soma[10];
    int i,j,k,cont_d;
    
     for(i=0;i<10;i++)
     {
		 printf("x[%i]:",i+1);
		 scanf("%i",&x[i]);
	 }	
	 for(i=0;i<10;i++)
     {
		 printf("y[%i]:",i+1);
		 scanf("%i",&y[i]);
	 }
	 
	 cont_d=0;
	 
	 //contar diferenças 
	 for(i=0;i<10;i++)
     {
		 j=0;
		 while(x[i]!= y[j] && j < 10){
				j=j+1;
		 }
		 if(j>=10){
				k=0;
				while(k <= cont_d && x[i]!= diferenca[k]){
					 k=k+1;
				}
				if(k >= cont_d){
					 d[cont_d] = x[i];
					 cont_d = cont_d + 1;
				}
		 }
	 }
	 //mostrar diferenças
	 printf("\n DIFERENCA:\n ");
	 for(i=0;i<cont_d;i++){
		 printf(" %i ", diferenca[i]);
	 }
	 //fazer soma e produto
	 for(i=0;i<10;i++){
		 soma    [i]=x[i]+y[i];
		 produto [i]=x[i]*y[i];
	 }
	 //mostrar soma 
	 printf("\nSOMA:\n");
	 for(i=0;i<10;i++){
		 printf(" %i " , soma[i]);
	 }
	 //mostrar produto
	 printf("\nPRODUTO:\n");
	 for(i=0;i<10;i++){
		 printf(" %i " , produto[i]);
	 }	
	
	 printf("\n\n");
	 
    system("pause");
}
