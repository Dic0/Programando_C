#include <stdio.h>
int main()
{
    int tamanho, c, quadrado, total = 0;
    puts("Qual é o tamanho do tabuleiro");
    scanf("%i", &tamanho);
    tamanho = tamanho * tamanho;

    for (c = 0; c < tamanho; c++)
    {
        if (c == 0)
        {
            quadrado = 1;
        }
        else
        {
            quadrado += quadrado;
        }
        total += quadrado;
        printf("Quadrado: %i | Total: %i\n", quadrado, total);
    }
    return 0;
}