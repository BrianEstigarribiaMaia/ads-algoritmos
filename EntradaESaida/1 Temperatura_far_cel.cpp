/*---------------------------------------------------------------------
   1 Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, 
   calcular e escrever o valor correspondente em graus Celsius.
   ok
---------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguese"); //para usar acentos 
    float fahrenheit,celsius; //declaração de váriaveis 
     
    printf("Entre com a temperatura em graus Fahrenheit: "); //pede ao usuario um valor 
    scanf("%f",&fahrenheit); //le o valor digitado e armazena na váriavel fahrenheit
    //atribuindo operações as váriveis  
    celsius = (fahrenheit - 32) / 9 * 5;
    //mostra resultado do operação/processamento 
    printf("%3.1f graus Fahrenheit sao %3.1f graus Celsius.\n",fahrenheit,celsius);
    //pausa no sistema antes do termino do programa 
    system("pause"); 
}
