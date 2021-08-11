/*
3. Escreva um algoritmo para imprimir os 50 primeiros número primos maior que 100. 
Obs.: Número primo é aquele divisível somente por 1 e ele mesmo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
	int num = 101, cont_primo = 0,cont = 0, cont_div = 0;
	
	while (cont_primo < 50)
		{
		for (cont = 1; cont <= num; cont++)
			{
			if (num % cont == 0) //num ? divisivel por cont	 
				cont_div++;	
			}//final do comando for
		if (cont_div == 2)
			{
			printf("%d  %d\n", cont_primo, num);
			cont_primo++;
			}//final do if
		num++;
		cont_div = 0;	
		}//final do while de 50 n?s primos
	system("pause");
	
}
