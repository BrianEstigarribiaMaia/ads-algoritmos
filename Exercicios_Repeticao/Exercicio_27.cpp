/*
15.	Escrever um algoritmo que leia uma quantidade desconhecida de números e
conte quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100].
A entrada de dados deve terminar quando for lido um número negativo.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,num,int1 = 0,int2 = 0,int3 = 0,int4 = 0;

	i = 1;
	do
	{
		printf("Digite um número: ");
		scanf("%d",&num);

        if(num < 0)
        {
            printf("FIM\n");
        }else
            if(num >= 0 && num <= 25)
            {
                int1++;
            }else
                if(num >= 26 && num<=50)
                {
                    int2++;
                }else
                    if(num >= 51 && num <= 75)
                    {
                        int3++;
                    }else
                        if(num >= 76 && num <= 100)
                        {
                            int4++;
                        }
		i++;
	}while(num >= 0);

	printf("*****Contador de Intervalos*****\n");
	printf("De [0  a 25]  = %d\n",int1);
	printf("De [26 a 50]  = %d\n",int2);
	printf("De [51 a 75]  = %d\n",int3);
	printf("De [76 a 100] = %d\n",int4);
	printf("********************************\n");

    system("pause");
}
