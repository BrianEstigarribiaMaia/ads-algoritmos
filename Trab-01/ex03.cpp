/*
3) (peso 0,5) Faça um algoritmo que leia 3 notas de um aluno (cada nota deve ser do tipo decimal). 
Ao final do programa deve ser impressa a média desse aluno. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguese");
    
    float n1,n2,n3,media;
    
    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    
    printf("Digite a nota 3: ");
    scanf("%f",&n3);
    
    media = (n1+n2+n3)/3;
    
    printf("A média do aluno é : %5.2f\n",media);
    system("pause");
}
