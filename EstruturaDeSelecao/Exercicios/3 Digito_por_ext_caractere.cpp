/*
3. O programa recebe um dígito de 6 a 10 e imprime na tela, este dígito,
 por extenso. Neste exercício a variável dígito é do tipo caractere.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    char digito;
    
    printf("Digite um numero de 6 a 10: \n");
    scanf("%c",&digito);
    
    switch(digito)
    {
        case '6': printf("seis\n");
        break;
        case '7': printf("sete\n");
        break;
        case '8': printf("oito\n");
        break;
        case '9': printf("nove\n");
        break;
        case '10': printf("dez\n");
        break;
        default: printf("ERRO: caractere fora do intervalo!!\n");
    }
    
    system("pause");
}
