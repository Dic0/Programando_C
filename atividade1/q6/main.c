/*Dados um capital (c), uma taxa de juros mensal fixa (J) e um periodo de aplicação em meses (M). Desenvolva um algoritmo que informe o montante (F) no final do periodo*/

#include <stdio.h>
#include <math.h>

int main()
{
    float capiatal, juros, meses, resolucao, resultado;

    printf("Insira o valor do capital: ");
    scanf("%f", &capiatal);
    printf("Insira o valor do juros: ");
    scanf("%f", &juros);
    printf("Insira o numero de meses: ");
    scanf("%f", &meses);
    resolucao = pow(1 + (juros / 100), meses);
    resultado = capiatal * resolucao;

    printf("O motante da sua formula eh: %.4f", resultado);
    return 0;
}