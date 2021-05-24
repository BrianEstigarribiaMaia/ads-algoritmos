/*
18.	Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. 
Se iguais, imprimir qualquer um.
ok
*/

#include <stdio.h>
#include <stdlib.h>	

main()
{
		
	int a,b,c;
	
	printf("Informe o primeiro valor: "); 
	scanf("%d",&a);
	
	printf("Informe o segundo valor : "); 
	scanf("%d",&b);
	
	printf("Informe o terceiro valor: "); 
	scanf("%d",&c);
	
	if (a > b)
		if (a > c)
			printf("%d e o maior\n",a);
		else
			printf("%d e o maior\n",c);
	else
	if (b > c)
		printf("%d e o maior\n",b);
	else
		printf("%d e o maior\n",c);
	
	system("pause");	
}
