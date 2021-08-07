#include <stdio.h>
#include <stdlib.h>

void Troca(int a, int b)
{
    int aux;

    aux = a;
    a   = b;
    b   = aux;
    printf("%d %d\n",a,b);
}

main()
{
    int a,b;

    a = 2;
    b = 5;

    printf("%d %d\n",a,b);
    Troca(a,b);

    system("pause");
}
