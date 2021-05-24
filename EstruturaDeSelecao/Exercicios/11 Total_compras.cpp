/*
11.	As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, 
e R$ 0,25 se forem compradas pelo menos doze.  Escreva um algoritmo que leia o 
número de maçãs compradas, calcule e escreva o valor total da compra.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	float t;
	
	printf("Informe o numero de maças adquiridas: "); 
	scanf("%d",&n);
	
	if (n < 12)
		t = n * 0.30;
	else
		t = n * 0.25;
		
	printf("Valor total da compra: %5.2f\n",t);

	system("pause");
}
