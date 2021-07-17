#include <stdio.h>
#include <stdlib.h>

main()
{
    int x,y,z;
    
    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d",&x,&y,&z);
    
    if (x > 0 && (x+z) > 10)
        {
            x = 2;
            y = z;
            z = 3 * y;
        }
    else
        {
            x = y - z;
            y = x;
            x = x + 1;
        }
        
    printf("x = %d, y = %d e z = %d\n",x,y,z);
        
    system("pause");
}
