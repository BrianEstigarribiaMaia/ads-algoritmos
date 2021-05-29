#include <stdio.h>
#include <stdlib.h>

main()
{
    int matriz[4][6], linha,coluna;

    for(linha = 0; linha < 4;linha++)
    {
        for(coluna = 0; coluna < 6;coluna++)
        {
            printf("Matriz L[%d] C[%d]",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }

    printf("Matriz impressa: \n");
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0;coluna < 6; coluna++)
        {
            printf("%d ",matriz[linha][coluna]);
        }
        printf("\n");
    }
    system("pause");
}
