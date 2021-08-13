/*
18.	Escreva um algoritmo para ler as coordenadas (X,Y) de uma quantidade indeterminada 
de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence.
O algoritmo será encerrado quando o usuário informar um valor NULO para a coordenada X
(nesta situação sem fazer a leitura da coordenada Y).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int x, y; 
    printf("Informe as coordenadas: "); 
    scanf("%d %d", &x, &y); 
    while (x != 0 && y != 0) { 
      if (x > 0 && y > 0) 
         printf("primeiro\n"); 
      else 
         if (x > 0 && y < 0) 
            printf("segundo\n"); 
         else 
            if (x < 0 && y > 0) 
               printf("terceiro\n"); 
            else 
               printf("quarto\n"); 
      printf("Informe as coordenadas: ") ;
      scanf("%d %d", &x, &y); 
   } 
    system("pause");
    return 0; 
}
