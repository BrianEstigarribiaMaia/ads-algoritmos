#include <stdio.h>
#include <stdlib.h>

void escreve_no_video()
{
    int num, n; //variaveis locais

    printf("Digite um numero: ");
    scanf("%d",&n);

    for(num = 1; num <= n; num++)
    {
        printf("%d \n",num);
    }
}

main()
{
    escreve_no_video();
    system("pause");
}
