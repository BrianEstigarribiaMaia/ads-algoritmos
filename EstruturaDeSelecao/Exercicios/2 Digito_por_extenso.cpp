/*
2. O programa recebe um dígito de 0 a 5 e imprime na tela, este dígito, por extenso. 
Neste exercício a variável dígito é do tipo inteiro.
ok

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int num;
    
    printf("Digite um numero entre 0 e 5: \n");
    scanf("%d",&num);
    
    switch(num)
    {
        case 0: printf("zero\n");
        break;
        case 1: printf("um\n");
        break;
        case 2: printf("dois\n");
        break;
        case 3: printf("tres\n");
        break;
        case 4: printf("quatro\n");
        break;
        case 5: printf("cinco\n");
        break;
        default: printf("ERRO: numero fora do intervalo\n");
    }
    system("pause");
}
