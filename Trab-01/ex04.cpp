/*
4) (peso 0,4) Faça um algoritmo que leia a quantidade de filhos (inteiro) de uma família. Se a quantidade estiver:
- entre 0 e 2 - Escrever a mensagem "Família pequena"
- entre 3 e 5 - Escrever a mensagem "Família média"
- maior que 5 - Escrever a mensagem "Família grande"

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguese");
    
    int qt_filhos;
    
    printf("Digite a quantidade de filhos: ");
    scanf("%d",&qt_filhos);
    
    if (qt_filhos <=2)
        printf("Familia pequena\n");
    else
        if (qt_filhos == 3 || qt_filhos <= 5)
            printf("Familia média\n");
        else
            if(qt_filhos > 5)
                printf("Familia grande\n");    
            
    
    system("pause");
}
