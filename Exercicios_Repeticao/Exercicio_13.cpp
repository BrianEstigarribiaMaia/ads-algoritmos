/*----------------------------------------------------------------
5.	Ler um número inteiro N (só aceitar valores positivos. 
Caso o N não seja positivo deverá ser lido um novo valor para o N) 
e escrever se é ou não um número PRIMO.
ok ERRO
--------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    int n, i, c; //declaração de váriaveis 
    
    do //faça 
    {
        printf("Digite um  número: "); //pede ao usuário um valor 
        scanf("%d",&n); //le o valor digitado e atribui a variavel n
    }while(n <= 0); //enquanto numero digitado for menor que 0
    
    c = 0; //inicializa a váriaveel com o valor 0
    for(i = 1; i <= n; i++) 
    {
        if (n%i == 0)
            c = c + 1;
        if ( c <= 2)
       		printf("E primo\n");
     	else 
        	printf("Nao eh primo\n");
	}
	//pausa no sistema antes do termino do programa 
    system("pause");
}
