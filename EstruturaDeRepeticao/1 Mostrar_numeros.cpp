/*
exemplo 1 de while mostrar 10 números
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");//para usar acentos 
    int num = 1; //declara e inicializa com o valor 1 a váririavel num
    
    while (num != 11) //enquanto num diferente de 11 
    {
        printf("Número : %d\n",num);
        num++; //incremento
    }
    //pausa no sistema antes do termino do programa 
    system("pause");
    return 0;
}
