/*
22 Faça um algoritmo que leia dois vetores (A e B) de 50 posições e 
crie um terceiro (C) com a interseção dos dois primeiros, isto é, 
coloque em C apenas os elementos que existem em A e que também existem em B.
 Mostre C

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int a[10],b[10],it[10];         
	int i,j,k,cont_i;
	
	//percorrer vetores 
    for(i=0;i<10;i++)
    {
		 printf("a[%i]:",i+1);
		 scanf("%i",&a[i]);
	 }	
	 for(i=0;i<10;i++)
     {
		 printf("b[%i]:",i+1);
		 scanf("%i",&b[i]);
	 }
	 
	 cont_i=0;                //iniciar contador de intersecções 
	 
	 for (i=0;i<10;i++)
		{ 
			j = 0;
			while (j < 10 && a[i] != b[j])
			 { 
				  j++;
			 }
			if (j < 10)
				 {
					 k = 0;
					 while (k < cont_i && it[k] != a[i])
					 {
							k++;
					 }
					 if (k >= cont_i)
							{ 
                                it[cont_i] = a[i];
								cont_i++;
							}
				}
        }
		
      //mostrar resultados  			
	 printf("\n INTERSECCAO: \n");          
	 for(i=0;i<cont_i;i++)
     {
		 printf(" %i ", it[i]);
	 }
	 printf("\n\n\n\n\n\n");
    system("pause");
}
