#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main ()
{
    float num1, num2, res;
    char oper;
    
    printf(" Calculadora simples .\n");
    
    printf("Por favor dois operandos .\n");
    scanf("%f %f", &num1 , &num2 );
    
    printf("num1 = %f num2 = %f\n", num1 , num2 );
    
    printf("Qual a operacao \n");
    oper = getche ();
    
    printf("A operacao e %c\n", oper );
    
    switch (oper)
    {
        case '+': res = num1 + num2 ;
        break;
        case '-': res = num1 - num2 ;
        break;
        case '*': res = num1 * num2 ;
        break;
        case '/': if (num2 == 0.0)
        printf (" Divisao por zero .\n");
        else
        res = num1 / num2 ;
        break;
        default: printf(" Operacao invalida !\n");
    }
    printf("O resultado da %c vale %.2f\n", oper , res );
    system ("PAUSE");
}
