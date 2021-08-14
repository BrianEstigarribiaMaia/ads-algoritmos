/*
10.	Ler três valores para os lados de um triângulo: A, B e C. Verificar se os lados fornecidos formam realmente um triângulo. 
Se formar, deve ser indicado o tipo de triângulo: Isósceles, escaleno ou eqüilátero.

Para verificar se os lados fornecidos formam triângulo: A < B + C  e  B < A + C  e  C < A + B
Triângulo isósceles: possui dois lados iguais (A=B ou A=C ou B = C)
Triângulo escaleno: possui todos os lados diferentes (A<>B e B <> C)
Triângulo eqüilátero: possui todos os lados iguais (A=B e B=C)
ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	
	printf("Digite 3 valores: ");
	scanf("%d %d %d",&a, &b, &c);
	
	if (a < b + c && b < a + c && c < a + b)
	   printf("Os lados fornecidos formam um triangulo.\n");
	else
       printf("Os lados fornecidos não formam um triangulo.\n");   
    if(a == b || a == c || b == c)
        printf("Triangulo isósceles: possui dois lados iguais\n");
     else
        if(a != b && b != c)  
        
            printf("Triangulo escaleno: possui todos os angulos diferentes\n");
         else
            if(a == b && b == c)//erro
                printf("Triângulo eqüilátero: possui todos os lados iguais\n");            

	system("pause");
}  
