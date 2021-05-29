#include <stdio.h>
#include <stdlib.h>

main()
{
    int i, x[5];
    
    for(i = 1; i <= 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&x[i]);
    }
    
    for(i = 1; i <= 5; i++);
        printf("%d ",x[i]);
        
    system("pause");
}
