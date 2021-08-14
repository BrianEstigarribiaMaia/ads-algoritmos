/*
1. Escreva um algoritmo que construa um menu com três funções: 
(I) Inclusão, (A) Alteração e (T) Término e mostre para o usuário a opção escolhida.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    char func;
    
    printf("Digite uma opcao: (I)Inclusao (A)Alretacao  (T)Termino : \n");
    scanf("%c",&func);
    
    switch(func)
    {
        case 'I': printf("Inclusao selecionada  \n");
        break;
        case 'A': printf("Alteracao selecionada \n");
        break;
        case 'T': printf("Termino selecionado   \n");
        break;
        default:  printf("Erro: opcao invalida!!\n");
    } 
    system("pause");
}
