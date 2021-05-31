#include <stdio.h>
#include <stdlib.h>

/*Estrutura de cadastro*/
struct CAD_ALUNO
{
    char Nome[50];
    int Codigo;
    float n1;
    float n2;
    float Media;
};

/*Função principal que executa o programa*/
main()
{
    /*Declaração de variaveis*/
    struct CAD_ALUNO aluno[3]; /*Estrutura lerá 3 alunos*/
    int i,cod;

    /*Leitura*/
    for(i=0;i<=2;i++)
    {
        printf("Digite o nome: ");
        scanf("%s",&aluno[i].Nome);
        printf("Digite o Codigo: ");
        scanf("%d",&aluno[i].Codigo);
        printf("Digite a nota 1: ");
        scanf("%f",&aluno[i].n1);
        printf("Digite a nota 2: ");
        scanf("%f",&aluno[i].n2);

        /*Manipulação*/
        aluno[i].Media = (aluno[i].n1 + aluno[i].n2)/2;
        system("cls");
    }

    system("cls");
    printf("Informe o codigo para consulta: ");
    scanf("%d", &cod);

    /*Acesso*/
    for(i=0;i<=2;i++)
    {
        if(cod == aluno[i].Codigo)
        {
            printf("Codigo: %d\n", aluno[i].Codigo);
            printf("Nome: %s\n", aluno[i].Nome);
            printf("Nota 1: %.2f\n", aluno[i].n1);
            printf("Nota 2: %.2f\n", aluno[i].n2);
            printf("Media: %.2f\n", aluno[i].Media);
            break;
        }
    }

    system("pause");
}
