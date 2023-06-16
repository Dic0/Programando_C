#include <stdio.h>

int main()
{

    int i, numero, maior, menor;

    printf("Digite o 1o numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (i = 2; i <= 15; i++)
    {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }

        if (numero < menor)
        {
            menor = numero;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}