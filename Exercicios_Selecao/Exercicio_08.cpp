/*
5. Faça um algoritmo que determina o preço com desconto para entradas de cinema. Estudantes recebem 50% de desconto, aposentados, 30%.
Os demais clientes pagam o ingresso completo.

Categorias: 	Estudante: E ou e
		        Aposentados: A ou a
		        Normal: N ou n
		        
		        
ok		        
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    char categoria;
    
    printf("Digite a caregoria (E,A ou N) para saber o valor do descronto : \n");
    scanf("%c",&categoria);
    
    switch(categoria)
    {
        case 'A': printf("Aposentados\n");
        break;
        case 'E': printf("Estudante\n");
        break;
        case 'N': printf("Normal\n");
        break;
        default: printf("ERRO: Fora de categoria\n");
    }
    
    system("pause");
}
