/*---------------------------------------------------------
6.Faça um algoritmo que receba o salário de 17 empregados 
e o seu percentual de aumento. Calcule e mostre o valor do 
aumento e o novo salário.
ok
----------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

main()
{
    float salario,aumento,novo_salario;
    int cont;
    
    cont = 0;
    
    for (cont=1;cont <=17;cont++)
    {
        printf("Digite o salario: ");
        scanf("%f",&salario);
        
        printf("Digite o valor do aumento em porcentagem: ");
        scanf("%f",&aumento);
        
        aumento = salario*(aumento/100);
        novo_salario = aumento + salario;
        
        printf("O valor do aumento eh %5.2f\n",aumento);
        printf("O valor do novo salario eh %5.2f\n",novo_salario);
        
    }
    system("pause");
}
