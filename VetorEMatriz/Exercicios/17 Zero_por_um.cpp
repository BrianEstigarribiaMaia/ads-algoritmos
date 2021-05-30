/*
Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, 
substituindo os valores nulos (zero) por 1. Mostre os 2 vetores
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>

main() 
{ 
    setlocale(LC_ALL,"");
    int i,vetor[3];
    int vetor2[3]; 
    
    for(i = 1; i <= 3; i++)
    {
        printf("Digite um número:");
        scanf("%d",&vetor[i]);
    }
    
    printf("\n\nPrimeiro vetor : "); 
    for(i = 1; i <= 3;i++) 
    { 
        printf("\nNa %d posicao do vetor, numero %d alojado",i,vetor[i]); 
        vetor2[i]=vetor[i]; 
        
        if(vetor2[i]==0) 
        { 
            vetor2[i]=1; 
        } 
    } 
    
    printf("\n\nSegundo vetor : "); 
    for(i = 1; i <= 3;i++) 
    { 
        printf("\nNa %d posicao do vetor, numero %d alojado",i,vetor2[i]); 
    } 
    printf("\n\n");
    system("pause"); 
}
