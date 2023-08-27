/*
2. Faça um programa que leia 100 números e os salve em um vetor. Os números digitados vão ser entre 1 e 6, representando o resultado de lançamento de um dado.
Verifique e informe quantas vezes cada lado apareceu.
Ex: v=[1 1 6 1 4 5 3 3 2... 6 2 4] 1 apareceu 20 vezes, 2 apareceu 12 vezes, 3 apareceu 16 vezes, 4 apareceu 17 vezes, 5 apareceu 12 vezes, 6 apareceu 23 vezes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVetor(int v[], int size)
{
    int i, cont[6];
    printf("\n[");
    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d ", v[i]);
        else
            printf("%d", v[i]);
    }

    switch (v[i])
    {
    case 1:
    
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 6:
        break;

    default:
    
    };
}

int main()
{
    srand(time(NULL));

    int i, v[100];
    for (i = 0; i < 100; i++)
    {
        v[i] = rand() % 6 + 1;
    }

    printVetor(v, 100);
    return 0;
}