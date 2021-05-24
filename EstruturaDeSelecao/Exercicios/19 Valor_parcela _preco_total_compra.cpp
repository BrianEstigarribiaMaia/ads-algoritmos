/*
19.	Uma loja de eletrodomésticos estabeleceu as seguintes modalidades de pagamento para a venda de suas mercadorias:

À vista ........................desconto de 2,5% sobre o preço de tabela;
De 2 até 5 vezes ...............preço de tabela, sem desconto ou acréscimo;
De 6 até 10 vezes ..............juros de 6% sobre o preço de tabela;
De 11 até 15 vezes ............ juros de 13% sobre o preço de tabela.
     
Exemplo: 	preço de tabela = R$ 100,00, para pagamento em 8 vezes;
            preço total = 100,00 + 6,00 (6% de 100,00) = 106,00;
            cada parcela = 106,00 / 8 = R$ 13,25.

O programa deve ler o preço de tabela e o número de vezes em que o pagamento será feito, 
e calcular o valor de cada parcela e o preço total da compra. 
Exibir, na tela, como segue:

PREÇO DE TABELA: R$ XXXXXXXXX
NUM. DE VEZES: XX
VALOR DE CADA PARCELA: R$ XXXXXXXXX
PREÇO TOTAL: R$ XXXXXXXXX

*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float preco,valor_parcela = 0,valor_total = 0;
	int qt_parcelas;
	
	printf("Digite o preco da mercadoria: ");
	scanf("%f",&preco);
	
	printf("Digite a quantidade de parcelas: ");
	scanf("%d",&qt_parcelas);
	
	if(qt_parcelas == 1)
	{
		valor_total = preco * 0.985;
	}else
		if(qt_parcelas >= 2 && qt_parcelas <= 5)
		{
			valor_total = preco;
		}else
			if(qt_parcelas >= 6 && qt_parcelas <= 10)
			{
				valor_total = preco * 1.06;
			}else
				if(qt_parcelas >= 11 && qt_parcelas <= 15)
				{
					valor_total = preco * 1.13;
				}
				
	valor_parcela = qt_parcelas / valor_total;
	
	printf("PREÇO DE TABELA: R$%.2f\n",preco);
	printf("NUM. DE VEZES:%d\n",qt_parcelas);
	printf("VALOR DE CADA PARCELA: R$ %.2f\n",valor_parcela);
	printf("PREÇO TOTAL: R$ %.2f\n",valor_total);

	system("pause");	
}
