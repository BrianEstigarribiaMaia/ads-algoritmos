/*
4. Escreva um algoritmo que deve solicitar um número até que o usuário digite 0.
 Encontrar os 5 primeiros números pares a partir desse número digitado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int num, i=0, pares[5]; 

	printf ("Digite um numero: \n"); 
	scanf("%d",&num); 
	while (num!= 0){ 
	if(((num % 2) == 0) && (i<5)){ 
	pares[i]=num; 
	i++; 
	} 
	printf ("Digite um numero: \n"); 
	scanf("%d",&num); 
	} 
	printf("Os primeiros 5 numeros pares sao:"); 
	for(i=0; i<5; i++) 
	printf ("%d\n", pares[i]); 
    system("pause");
}
