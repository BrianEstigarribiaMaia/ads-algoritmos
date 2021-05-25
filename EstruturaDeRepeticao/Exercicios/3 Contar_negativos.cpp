/*
Pedir 20 valores e mostrar quantos deles são negativos.
ok
*/
#include <stdio.h>

int main()
{
    int i=0, num, cont=0;

    printf("Informe Valores\n");
    while(i<2)
    {
        printf("Numero %d = ",i+1);
        scanf("%d",&num);
        if(num<0)
            cont++;
        i++;
    }
    printf("\nQtd de numeros negativos = %d\n",cont);
    return 0;
}
