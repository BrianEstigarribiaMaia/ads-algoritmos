/*

20.	Faça um programa que leia idade e peso de um atleta e imprima a sua categoria, de acordo com a seguinte tabela:

Idade	                   PESO               CATEGORIA
até 12 anos	                -	              Infantil
13 a 16 anos			até 40 kg	          Juvenil leve
						acima de 40 kg	      Juvenil pesado
17 a 24 anos	        até 45 kg	          Senior leve
						de 45,001 a 60 kg	  Senior médio
                    	acima de 60 kg	      Senior pesado
acima de 24 anos	        -	              Veterano

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int idade;
	float peso;

	printf("Digite a idade do atleta: ");
	scanf("%d",&idade);

	printf("Digite o peso do atleta: ");
	scanf("%d",&peso);

	if (idade <= 12)
        printf("Infantil");
    if (idade >= 13 && idade < 16 && peso < 40)
            printf("Juvenil Leve");
    if (idade >= 13 && idade <= 16 && peso > 40)
                printf("Juvenil Pesado");
    if (idade >= 17 && idade <= 24 && peso <45)
                	 printf("Senior Leve");
    if (idade >= 17 && idade <= 24 && peso > 45 && peso < 60)
                            printf("Senior Medio");
    if (idade >= 17 && idade <= 24 && peso > 60)
                                printf("Senior Medio");
    if (idade >= 24)
                                printf( "Veterano");

	system("pause");
}
