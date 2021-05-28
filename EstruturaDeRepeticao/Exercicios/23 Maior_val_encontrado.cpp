/*
23.	Faça um programa que leia uma série de 15 números e no final imprima o maior valor encontrado._OK
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int i, num, maior = 0;
	
	for(i=0;i<15;i++){
        printf("Digite um numero: \n");
        scanf("%d",&num);
        
        maior  = num;
        
        if(num > maior){
            num = maior;
        }
 	}
 	
 	printf("maior eh %d",maior);
 	
    system("pause");
    return 0;
}
