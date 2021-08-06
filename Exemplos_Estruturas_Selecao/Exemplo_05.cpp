/*
Seleção composta
ok
*/

//bibliotecas uteis para funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
    float salario,sr; //declaração de váriaveis 
      
    printf("Informe o salário: "); //pede a informação ao usuário 
    scanf("%f",&salario); //pega a informação e armazena na váriavel salario
      
    if (salario < 500) //condição caso salário menor que 500
 		sr = (salario * 1.15);
    else // senão
        sr = (salario * 1.05);
    //mostrar reajuste na tela conforme a condição      
    printf("Salário com reajuste: %.2f\n", sr);  
    //pausa no sistema antes de finalizar o programa 
    system("pause"); 
	return 0;    
}    
