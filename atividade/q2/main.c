/*Desenvolva um algoritmo que solicite ao usuario a distância percorrida em quilometros e converta para centimetros*/

#include <stdio.h>

int main()
{
    float num1, resultado;

    printf("Insira a sua quilometragem em km: ");
    scanf("%f", &num1);
    resultado = num1 / 100000;
    printf("O sua quilomentragem %fkm em centimetros eh: %fcm", num1, resultado);
    return 0;
}