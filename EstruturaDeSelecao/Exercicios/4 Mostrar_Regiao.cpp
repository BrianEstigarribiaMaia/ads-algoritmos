/*
4. Escreva um algoritmo que leia o código de origem de um produto e imprima a região do mesmo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int cod;
    
    printf("Digite o código da Regiao: ");
    scanf("%d",&cod);
    
    switch(cod)
    {
    	case 1: printf("Sul\n");
    	break;
    	case 2: printf("Sudeste\n");
    	break;
    	case 3: printf("Centro-oeste\n");
    	break;
    	case 4: 
    	case 5: printf("Norte\n");
		break;
    	case 6: printf("Nordeste\n");
    	break;	
    	default: printf("Importado\n");
	}
    system("pause");
}
