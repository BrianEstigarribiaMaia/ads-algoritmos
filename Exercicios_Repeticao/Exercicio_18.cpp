/*----------------------------------------------------------------------------------------------------------------------
8.	Os funcionários de uma loja de motos recebem um salário fixo mais 4% de comissão sobre as vendas. 
Faça um algoritmo que leia o número de funcionários, o salário fixo e o valor das vendas de cada funcionário. 
Calcule e mostre o valor da comissão,o salário final de cada funcionário e o valor total da folha de pagamento da loja.
ok
-----------------------------------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtdfunc, cont;
	float salfixo, valvendas, valcomissao, salfunc, folhapag = 0;
		
	printf("Digite a quantidade de funcionarios\n");
	scanf("%d", &qtdfunc);
		
	cont =0;
	
	while(cont<qtdfunc) 
	{
		printf("Digite o valor do salario fixo\n");
		scanf("%f", &salfixo);
		printf("Digite o valor das vendas\n");
		scanf("%f", &valvendas);	
			
		valcomissao = valvendas * 0.04;
			
		salfunc = salfixo + valcomissao;
			
		printf("O valor da comissao do funcionario eh %4.2f\n", valcomissao);
		printf("O salario do funcionario eh %4.2f\n", salfunc);
			
		folhapag = 	folhapag + salfunc;
		
		cont++;
	}
	
	printf("O total da folha de pagamento eh %4.2f\n", folhapag);
	
    system("pause");
}
