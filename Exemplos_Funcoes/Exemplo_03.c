#include <stdio.h>
#include <stdlib.h>

int num; //variavel global

void seta_numero()
{
    printf("Digite um numero: ");
    scanf("%d",&num);
}

main()
{
    seta_numero();
    printf("Numero digitado foi %d\n",num);
    system("pause");
}
