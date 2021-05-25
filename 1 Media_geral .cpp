/*
exemplo de código com uso de for
ok
*/

//bibliotecas uteis para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arc,char*argv[])
{
    setlocale(LC_ALL,"Portuguese");//para utilizar acentos 
    //decalaração de várivaies 
    float ma,mediag,soma;
    int contador;
    //inicialização de váriavel
    soma = 0;
    //informar 5 médias 
    for(contador = 1; contador <= 5; contador++)
    {
        printf("Informe a média: ");
        scanf("%f",&ma);
        soma = soma + ma;
    }
    //calculo da média geral 
    mediag = soma/contador;
    //mostrar média geral 
    printf("A média geral é: %.2f\n\n",mediag);  
    //pausa no sistema antes do termino do programa 
    system("pause");
    return 0;
}
