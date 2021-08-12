/*
9.	O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor 
e dos impostos aplicados ao preço de fábrica. Faça um algoritmo que leia o código, o nome e o preço de fábrica de
8 veículos o percentual de lucro do distribuidor e o percentual de impostos de cada veículo. 
Calcule e mostre:
a.	O valor correspondente ao lucro do distribuidor;
b.	O valor correspondente aos impostos;
c.	O preço final de cada veículo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,cod;
    char nome;
    float preco_final,preco_de_fabrica,percentual_lucro,impostos,
	numero_de_veiculos,valor_impostos,valor_lucro_distribuidor,percentual_de_lucro,preco_fabrica;
    
    i = 1;
    while(numero_de_veiculos < 8)
    {
    	printf("*****VEICULOS*****\n");
    	printf("Codigo:\n");
    	scanf("%d",&cod);
    	printf("Nome:\n");
    	scanf("%c",&nome);
    	printf("Preco de fabrica:\n");
    	scanf("%f",&preco_de_fabrica);
    	printf("Percentual Imposto:\n");
    	scanf("%f",&impostos);
    	printf("Perecentual de lucro:\n");
    	scanf("%f",&percentual_lucro);
    	
    	numero_de_veiculos++;
    	i++;
	}
	
	valor_impostos = preco_de_fabrica * impostos;
	valor_lucro_distribuidor = preco_de_fabrica * percentual_de_lucro;
	preco_final = preco_fabrica + percentual_lucro + impostos;
	
	printf("**********CUSTO TOTAL DOS VEICULOS CADASTRADOS**********\n");
	printf("O valor correspondente ao lucro do distribuidor: %.2f\n",valor_lucro_distribuidor);
	printf("O valor correspondente aos impostos: %.2f\n",valor_impostos);
	printf("O preço final de cada veículo: %.2f\n",preco_final);
	printf("--------------------------------------------------------\n");
	
    system("pause");
}
