/*-------------------------------------------------------------------------------------------
3.Faça um algoritmo que leia o valor do salário de 35 funcionários e o valor do salário mínimo.
 Calcule e mostre a quantidade de salários mínimos que cada funcionário ganha.
 ok
--------------------------------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    float salario,salario_minimo,sm; //declaração de váriaveis 
    int contador = 0; //declaração e inicializa com o valor 0
    
    for (contador = 1; contador <=35; contador ++)
    {
        printf("Digite o salario: ");
        scanf("%f",&salario);
        
        salario_minimo = 900;
        sm = salario / salario_minimo;
        
        printf("Voce ganha %.2f salarios minimos\n",sm);
    }
    //pausa no sistema antes do termino do programa 
    system("pause");
}
