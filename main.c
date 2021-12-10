#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#include "arvore.h"
int main()
{
    int m, totalElements, position, element, i;
    Hash *h;

    scanf("%d %d", &m, &totalElements);
    while (m != 0 || totalElements != 0)
    {
        h = criaHash(m);

        for (i = 0; i < totalElements; i++)
        {
            scanf("%d", &element);
            insereHash(h, element);
        }

        scanf("%d", &position);

        imprime(h, position);
        printf("\n");
        liberaHash(h);
        scanf("%d %d", &m, &totalElements);
    }

    printf("\n");
    system("pause");
    return 0;
}