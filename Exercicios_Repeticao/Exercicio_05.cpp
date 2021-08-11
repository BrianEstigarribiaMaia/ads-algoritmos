/*
2.Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
    int num,contador;
    contador = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    
    while(contador <=10)
    {
        printf("%d\n",num);
        contador++;
    }
    
    system("pause");
}
