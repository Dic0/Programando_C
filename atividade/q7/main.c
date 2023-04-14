/*Sob certas condições, o número de bactérias B, de uma cultura, em função do tempo t, medido em horas, é dado por B(t) = 2^t¹². Desenvolva algoritmo que determine o número de bactérias após a hora zero. O usuário deve informar o número de dias que ele deseja saber o número de bactérias.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float dias, dia_em_H, divisao_expoente, resultado;

    printf("informe o numero de dias: ");
    scanf("%f", &dias);
    dia_em_H = dias * 24;
    divisao_expoente = dia_em_H / 12;
    resultado = pow(2, divisao_expoente);

    printf("A resolucao ficou assim: B(t) = 2^(%.0f/12)\n", dia_em_H, resultado);
    printf("O numero de bacterias apos a hora zero sera B(t): %.2f\n", resultado);
    return 0;
}