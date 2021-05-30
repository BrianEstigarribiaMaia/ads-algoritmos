/*
Preencher um vetor X de 10 elementos (índices de 0 a 9) com o valor inteiro 30. 
Escrever o vetor X, após seu total preenchimento.

ok
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;     //inicaliza a variavel 'i' contador do tipo inteiro
    int x[10]; //inicializa o vetor 'x' com 10 posições do tipo inteiro
    
    //preencher vetor x
    for(i = 0; i <= 10; i++) //percorre 10 elementos
    {
        x[i] = 30; //atribui o valor 30 a cada posição
    }
    //mostrar resultado na tela 
    for(i = 0; i < 10; i++) //percorre 10 elementos 
    {
        printf ("x[%d] = %d\n",i,x[i]); //posição(contador) e preenchimentode 'x' (30)
    }
    
    system("pause");
}
