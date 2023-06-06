/*Considere a necessidade de desenvolver um software que implemente a fórmula de Bhaskara (ou Báskara), a qual é usada para obter as raizs reais de uma equação de segundo grau*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, delta_expo, raiz_delta, raiz1, raiz2;

    printf("Insira o valor de a: ");
    scanf("%f", &a);
    printf("Insira o valor de b: ");
    scanf("%f", &b);
    printf("Insira o valor de c: ");
    scanf("%f", &c);

    delta_expo = pow(b, 2),
    delta = delta_expo - 4 * a * c;
    if (delta >= 0)
    {
        raiz_delta = sqrt(delta);
        raiz1 = (-b + raiz_delta) / (2 * a);
        raiz2 = (-b - raiz_delta) / (2 * a);

        printf("AS suas raizes seram: %.2f e %.2f", raiz1, raiz2);
        return 0;
    }
    else
    {
        printf("Sua equacao nao possuira valores reais");
        return 0;
    }
}