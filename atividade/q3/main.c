/*Desenvolva algoritmo que soliciate ao usuario 5 valores numéricos e some os valores, então, extraia a raiz quarta. Apresente o resultado do calculoao usuario*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, num3, num4, num5, soma, resultado;

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
    soma = num1 + num2 + num3 + num4 + num5;
    resultado = pow(soma, 1.0 / 4);
    printf("A raiz quarta do valor %.4f eh: %f", soma, resultado);
    return 0;
}