/*
Crie um registro com o nome do funcionário, cargo e salário.
Leia este registro p/ um funcionário e ao final escreva o conteúdo do registro.

*/

#include <stdio.h>
#include <stdlib.h>

struct CAD_FUNCIONARIO
{
    char nome[50];
    char cargo[50];
    float salario;
};

main()
{
   struct CAD_FUNCIONARIO funcionario;

   printf("\t\tCADASTRO DE FUNCIONARIOS\n");
   printf("Digite o nome:    \n");
   scanf("%s",&funcionario.nome);
   printf("Digite o cargo:   \n");
   scanf("%s",&funcionario.cargo);
   printf("Digite o salário: \n");
   scanf("%f",&funcionario.salario);

   printf("\t\tDADOS DO FUNCIONARIO\n");
   printf("Nome: %s\n",funcionario.nome);
   printf("Cargo: %s\n",funcionario.cargo);
   printf("Salario: %5.3f\n",funcionario.salario);

   printf("---------------------------------------\n");

   system("pause");
}
