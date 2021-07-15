/********************************************************************
* Projeto Urna Eletronica - Disciplina de Algoritmos e Programação  *
* Profesora: Aline Riva                                             *
*                                                                   *
* Data: 08/07/2016                                                  *
* Autor: Brian Estigarribia                                         *
* Versão Final                                                      *
*********************************************************************/
/*
Falta------------- 
Candidatos eleitos por partido
Ordem decrescente de vereadores
Informar vereadores vagas

*/


//====================BIBLIOTECAS UTEIS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <windows.h>
#include <locale.h>
#define STRAM 55     //constante para definir tamanho interno de menus

//====================REGISTROS
// estruturas de cadastro candidatos
struct CANDIDATOS
{
	char nome[30];
	int  numero_candidato;
	int  numero_partido;
	int votos;
} pre[2],ver[5];

//====================VARIAVEIS GLOBAIS
char pergunta,confirma;
int vagas_ver=0;
int i=0,op,cand1=0,cand2=0,nulo=0,op1,voto=0;
int candv1=0,candv2=0,candv3=0,candv4=0,candv5=0;

//=====================PROTÓTIPO DE FUNÇÕES E PROCEDURES
void menu_inicial();
int cadastrar_candidatos();
int votar();
int relatorios();


//================================ MAIN
int main()
{
	system("color f9");

	menu_inicial();

	system("pause");
	return 0;
}


//====================PROCEDIMENTOS  1
//procedures para montar um menu com linhas e bordas
void cria_menu_linha_sup()
{
	printf("%c", 201);
	for(i=0; i<STRAM; i++)
	{
		printf("%c", 205);
	}
	printf("%c\n", 187);
}

void cria_menu_linha_rodape(int tamx)
{
	printf("%c", 200);
	for(i=0; i<STRAM; i++)
	{
		printf("%c", 205);
	}
	printf("%c\n", 188);
}

void cria_menu_item(int tamx, char str[])
{
	printf("%c", 186);
	printf("%-*s", tamx, str);
	printf("%c\n", 186);
}

void cria_menu_linha_hor(int tamx)
{
	printf("%c", 204);
	for(i=0; i<tamx; i++)
	printf("%c", 205);
	printf("%c\n", 185);
}

//====================PROCEDIMENTOS  2
//procedure para criar opções de menu inicial
void menu_inicial()
{
	int cargo;

	cria_menu_linha_sup();
	cria_menu_item(STRAM,"MENU INICIAL");
	cria_menu_linha_hor(STRAM);
	cria_menu_item(STRAM,"[1] - Cadastrar candidatos");
	cria_menu_item(STRAM,"[2] - Votar");
	cria_menu_item(STRAM,"[3] - Relatorios");
	cria_menu_item(STRAM,"[4] - Sair");
	cria_menu_linha_rodape(STRAM);

	printf("Digite sua opcao ----> ");
	scanf("%d",&op);

	system("cls");

	switch(op)
	{
		case 1: cadastrar_candidatos();
		break;
		case 2: votar();
		break;
		case 3: relatorios();
		break;
		case 4: printf("\a\aFIM\n");
		break;
		default: printf("\aOPCAO INVALIDA\n");
	}
}

//====================FUNÇÕES
//função para realizar cadastro de candidatos
int cadastrar_candidatos()
{
	int i;

	cria_menu_linha_sup();
	cria_menu_item(STRAM, "CADASTRO CANDIDATOS");
	cria_menu_linha_hor(STRAM);
	cria_menu_item(STRAM,"Selecione o cargo:");
	cria_menu_item(STRAM,"[1] - PREFEITO");
	cria_menu_item(STRAM,"[2] - VEREADOR");
	cria_menu_linha_rodape(STRAM);

	printf("Digite sua opcao: ");
	scanf("%d",&op);

	system("cls");

	switch(op)
	{
		case 1:
			for(i=1;i<=2;i++)
			{
				cria_menu_linha_sup();
				cria_menu_item(STRAM,"CADASTRO CANDIDATOS");
				cria_menu_linha_hor(STRAM);
				cria_menu_item(STRAM,"Voce selecionou a opcao PREFEITO - Instrucoes");
				cria_menu_item(STRAM,"Digite o nome do candidato");
				cria_menu_item(STRAM,"Digite o numero do candidato");
				cria_menu_item(STRAM,"Digite o numero do partido");
				cria_menu_linha_rodape(STRAM);

				printf("Nome do %d candidato ----> ",i);
				scanf("%s",&pre[i].nome);

				printf("Numero do candidato 3 digitos ----> ");
				scanf("%d",&pre[i].numero_candidato);

				printf("Numero do partido 2 digitos----> ");
				scanf("%d",&pre[i].numero_partido);

				system("cls");
			}
		break;
		case 2:
			for(i=1;i<=5;i++)
			{
				cria_menu_linha_sup();
				cria_menu_item(STRAM,"CADASTRO CANDIDATOS");
				cria_menu_linha_hor(STRAM);
				cria_menu_item(STRAM,"Voce selecionou a opcao VEREADOR - Instrucoes");
				cria_menu_item(STRAM,"Digite o nome do candidato");
				cria_menu_item(STRAM,"Digite o numero do candidato");
				cria_menu_item(STRAM,"Digite o numero do partido");
				cria_menu_linha_rodape(STRAM);

				printf("Nome do %d candidato ----> ",i);
				scanf("%s",&ver[i].nome);

				printf("Numero do candidato 5 digitos ----> ");
				scanf("%d",&ver[i].numero_candidato);

				printf("Numero do partido 2 digitos ----> ");
				scanf("%d",&ver[i].numero_partido);

				system("cls");
			}

			printf("qt vagas ver: ");
			scanf("%d",&vagas_ver);

			if(vagas_ver < 1 || vagas_ver > 5) // vagas disponiveis de 1 a 5
			{
				printf("\aQUANTIDADE INVALIDA\n");
			}
		break;
		default: printf("\aOPCAO INVALIDA\n");
	}

	system("cls");

	printf("Voltar ao menu inicial s/n ?\n");
	scanf(" %c",&pergunta);

	system("cls");
	if(pergunta == 's')
	{
		system("cls");
		printf("\a");
		menu_inicial();
	}else if (pergunta == 'n');
		{
			system("cls");
			printf("\aCadastro encerrado\n");
		}
		return 0;
}

//função para realizar o processo de votação
int votar()
{
	int i,j,aux=0;

	cria_menu_linha_sup();
	cria_menu_item(STRAM,"MENU DE VOTACAO");
	cria_menu_linha_hor(STRAM);
	cria_menu_item(STRAM,"Selecione o cargo:");
	cria_menu_item(STRAM,"[1] - PREFEITO");
	cria_menu_item(STRAM,"[2] - VEREADOR");
	cria_menu_linha_rodape(STRAM);

	printf("Cargo: ");
	scanf("%d",&op);

	system("cls");

	switch(op)
	{
		case 1:
			cria_menu_linha_sup();
			cria_menu_item(STRAM,"MENU DE VOTACAO");
			cria_menu_linha_hor(STRAM);
			cria_menu_item(STRAM,"Opcao Prefeito - Instrucoes");
			cria_menu_item(STRAM,"Digite o numero que corresponde sua opcao");
			cria_menu_linha_rodape(STRAM);

			for(i=1;i<=2;i++)
			{
				printf("Opcao %d\n",i);
				printf("Nome: %s\n",pre[i].nome);
				printf("Numero: %d\n",pre[i].numero_candidato);
				printf("Partido: %d\n",pre[i].numero_partido);
				printf("-----------------------------\n\n");
			}

			printf("Digite 3 para sair, ou qualquer numero para anular\n");

			do
			{
				printf("Digite uma opcao: ");
				scanf("%d",&op);

				if(op == 1)  //se opção verdadeira acumula candidato 
				{
					cand1++;
				}else if(op==2)
						{
							cand2++;
						}else if(op==3)
							{
								printf("\aVotos Finalizados\n\n");
							}else
								{
									printf("\aVoto anulado\n");
									nulo++;
									continue;
								}
			}while(op != 3);

			printf("Voltar ao menu inicial s/n ?\n"); 
			scanf(" %c",&pergunta);

			system("cls");

			if(pergunta == 's')
			{
				system("cls");
				menu_inicial();
			}else
				if (pergunta == 'n');
				{
					system("cls");
					printf("\aVotacao encerrada\n");
				}
		break;
		case 2:  
			cria_menu_linha_sup(); 
			cria_menu_item(STRAM,"MENU DE VOTACAO");
			cria_menu_linha_hor(STRAM);
			cria_menu_item(STRAM,"Opcao Vereador - Instrucoes");
			cria_menu_item(STRAM,"Digite o numero que corresponde sua opcao");
			cria_menu_linha_rodape(STRAM);

			for(i=1;i<=5;i++)  //mostrar opções de voto
			{
				printf("Opcao %d\n",i);
				printf("Nome: %s\n",ver[i].nome);
				printf("Numero: %d\n",ver[i].numero_candidato);
				printf("Partido: %d\n",ver[i].numero_partido);
				printf("-----------------------------\n\n");
			}
			
			do
			{
				printf("Digite uma opcao: ");
				scanf("%d",&op);

				switch(op)
				{
					case 1:candv1++;
					break;
					case 2:candv2++;
					break;
					case 3:candv3++;
					break;
					case 4:candv4++;
					break;
					case 5:candv5++;
					break;
					case 6:	printf("\aVotos Finalizados\n\n");
					break;
					default: printf("\aVoto anulado\n"); nulo++;
				}
			}while(op != 6);

			printf("Voltar ao menu inicial s/n ?\n"); 
			scanf(" %c",&pergunta);

			system("cls");

			if(pergunta == 's')
			{
				system("cls");
				menu_inicial();
			}else
				if (pergunta == 'n');
				{
					system("cls");
					printf("\aVotacao encerrada\n");
				}
		break;
		default: printf("\aOPCAO INVALIDA\n");
	}
	return 0;
}

//função para gerar relatórios
int relatorios()
{
	float perc1=0.0,perc2=0.0,percv1=0.0,percv2=0.0,percv3=0.0,percv4=0.0,percv5=0.0;
	float total=0.0,total2=0.0;
	int i=0,j=0,aux=0;

	cria_menu_linha_sup();
	cria_menu_item(STRAM,"MENU DE RELATORIOS");
	cria_menu_linha_hor(STRAM);
	cria_menu_item(STRAM,"[1] - Visualizar candidatos por cargo");
	cria_menu_item(STRAM,"[2] - Total de votos por candidato");
	cria_menu_item(STRAM,"[3] - Total perecntual de cada candidato");
	//cria_menu_item(STRAM,"[4] - Candidatos eleitos por partido");
	cria_menu_linha_rodape(STRAM);

	printf("Opcao: ");
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			printf("LISTA DE CANDIDATOS A PREFEITO\n\n\n");
			for(i=1;i<=2;i++)
			{
				printf("Nome: %s\n",pre[i].nome);
				printf("Numero: %d\n",pre[i].numero_candidato);
				printf("-------------\n");
			}

			printf("\n\n");

			printf("LISTA DE CANDIDATOS A VEREADOR\n\n\n");
			for(i=1;i<=5;i++)
			{
				printf("Nome: %s\n",ver[i].nome);
				printf("Numero: %d\n",ver[i].numero_candidato);
				printf("-------------\n");
			}
		break;
		case 2:
			printf("TOTAL DE VOTOS POR CANDIDATO\n\n");
			printf("PREFEITOS\n\n");

			if(cand1 > cand2)
			{
				printf("Candidato 1 %d\nCandidato 2 %d\n",cand1,cand2);
				printf("Vencedor Cand 1!");
			}else
				{
					printf("Candidato 2 %d\nCandidato 1 %d\n",cand2,cand1);
					printf("Vencedor Cand 2!");
				}

			printf("\n\n\n");

			printf("VEREADORES\n\n");
			printf("Candidato 1 %d\n",candv1);
			printf("Candidato 2 %d\n",candv2);
			printf("Candidato 3 %d\n",candv3);
			printf("Candidato 4 %d\n",candv4);
			printf("Candidato 5 %d\n",candv5);
		break;
		case 3:
		    printf("Escolha o cargo para ver os percentuais\n 1 - Prefeito, \n2 - Vereador");
		    scanf("%d",&op1);

		    switch(op1)
		    {
		        case 1:
                    printf("PERCENTUAL DE PREFEITOS\n\n");
                    total = cand1+cand2+nulo;
                    perc1 = (float(cand1)/total)*100.0;
                    perc2 = (float(cand2)/total)*100.0;


                    printf("Percentual cand 1 eh %.2f\n",perc1);
                    printf("Percentual cand 2 eh %.2f\n",perc2);
		        break;
		        case 2:
		            printf("PERCENTUAL DE VEREADORES\n\n");

                    total2 = candv1+candv2+candv3+candv4+candv5+nulo;

                    percv1 = (float(candv1)/total2)*100.0;
                    percv2 = (float(candv2)/total2)*100.0;
                    percv3 = (float(candv3)/total2)*100.0;
                    percv4 = (float(candv4)/total2)*100.0;
                    percv5 = (float(candv5)/total2)*100.0;


                    printf("Percentual cand 1 eh %.2f\n",percv1);
                    printf("Percentual cand 2 eh %.2f\n",percv2);
                    printf("Percentual cand 3 eh %.2f\n",percv3);
                    printf("Percentual cand 4 eh %.2f\n",percv4);
                    printf("Percentual cand 5 eh %.2f\n",percv5);
                break;
                default: ;

		    }
		break;
		case 4:
		break;
		default: printf("\aOPCAO INVALIDA\n");
	}
	printf("Voltar ao menu inicial s/n ?\n");
    scanf(" %c",&pergunta);

    system("cls");

    if(pergunta == 's')
    {
        system("cls");
        menu_inicial();
    }else
        if (pergunta == 'n');
            {
                system("cls");
                printf("\aRelatorios encerrados\n");
            }
	return 0;
}

