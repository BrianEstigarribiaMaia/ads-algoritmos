/*
2 - 2-	Gerar (sem ler) e imprimir uma matriz de 10 linhas e 10 colunas cujos elementos são 1, 2, 3, ... , 99, 100.
*/

#include <stdio.h> 
#include <stdlib.h> 
main() 
{ 
	int M[10][10], L, C; 
	for (L=0; L<10; L++) 
	for (C=0; C<10; C++) 
	M[L][C] = L * 10 + C + 1; 
	
	printf ("Matriz Impressa: \n"); 
	for (L=0; L<10; L++) { 
	for (C=0; C<10; C++) { 
	printf ("%d ", M[L][C]); 
	} 
	printf ("\n"); 
	} 
	system ("PAUSE"); 
}
