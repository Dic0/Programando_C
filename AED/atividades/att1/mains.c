/*
1. Faça um programa que leia 10 números e os salve em um vetor. Mostre os números na tela na ordem contraria.
Ex: v=[1 5 1 6 7 9 2 6 4 1 9 1] -> 9 1 4 6 2 9 7 6 1 5 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVetor(int v[], int size)
{
    int i;
    printf("\n[");
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d ", v[i]);
        else
            printf("%d", v[i]);
    }
    printf("]\n\n");

    printf("\n[");

    for (i = 4; i >= 0; i--)
    {
        if (i == 0)
            printf("%d", v[i]);
        else
            printf("%d ", v[i]);
    }
    printf("]\n\n");
}

int main()
{
    srand(time(NULL));

    int i, v[5];
    for (i = 0; i < 5; i++)
    {
        v[i] = rand() % 6;
    }

    printVetor(v, 10);
    return 0;
}