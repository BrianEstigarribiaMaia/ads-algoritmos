/*
2) (peso 0,6) Faça um algoritmo que leia a quantidade de itens (número inteiro) e o valor de cada item (número decimal). 
Calcule o valor total da compra (qtde de itens * valor do item), aplique o percentual de desconto conforme as informações abaixo:

Qtd de itens			% desconto	
até 5				    4.5		
de 6 até 8		       	3.1		
de 9 até 12		       	2.8		
de 13 até 15			2.4		
16 ou mais peças		2.2		

Ao término do programa imprimir a quantidade de itens, valor de cada item, valor total da compra sem desconto e valor total da compra com desconto.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguese");
    
    int qt_itens;
    float val_item,val_total_compra,desconto,val_tot_desc;
    
    printf("Digite a quantidade de itens: ");
    scanf("%d",&qt_itens);
    
    printf("Digite o valor dos itens: ");
    scanf("%f",&val_item);
    
    val_total_compra = qt_itens*val_item;
    
    if (qt_itens == 5)
        desconto = 4.5;
    else
        if(qt_itens == 6 && qt_itens <=8)
            desconto = 3.1;
        else
            if(qt_itens == 9 && qt_itens <=12)
                desconto = 2.8;
            else
                if(qt_itens == 13 && qt_itens <= 15)
                    desconto = 2.4;
                else
                if (qt_itens >=16)  
                    desconto = 2.2;    
                    
     val_tot_desc = val_total_compra - desconto;               
    
    printf("Quantidade de itens %d: \n",qt_itens);
    printf("Valor de cada iten: %5.2f\n",val_item);
    printf("Valor total da compra com desconto: %5.2f\n",val_total_compra);  
    printf("Valor total com desconto: %5.2f\n",val_tot_desc);  
    
    system("pause");
}
