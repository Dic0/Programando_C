/*Desenvolva algoritmo que soliciate ao usuario 5 valores  numéricos e calcule a média aritimética simples*/

#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, resultado;

    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    printf("Insira o segundo valor: ");
    scanf(" %f", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%f", &num3);
    printf("Insira o quarto valor: ");
    scanf("%f", &num4);
    printf("Insira o quinto valor: ");
    scanf(" %f", &num5);
    resultado = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("A media dos valores sao:: %f", resultado);
    return 0;
}