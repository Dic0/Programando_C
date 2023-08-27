#include <stdio.h>

int main()
{

    int i, v[5], cont = 0, acc = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um valor para a posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\n\n[");
    for (i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            printf("%d ", v[i]);
        }
        else
        {
            printf("%d", v[i]);
        }
    }
    printf("]\n\n");

    for (i = 0; i < 5; i++)
    {

        if (v[i] > 6)
        {
            printf("v[%d]=%d e maior que 6\n", i, v[i]);
            cont++;
        }

        acc += v[i];
    }

    printf("\n\nTem %d numeros maiores q 6\n", cont);
    printf("Soma de todos numeros e %d: \n\n", acc);

    return 0;
}