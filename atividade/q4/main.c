/*Um comerciante maluco cobra 10% de acréscimo para cada prestação em atraso e depois dá um desconto de 10% sobre o valor do acréscimo. Desenvolva algoritmo que solicite o valor da prestação em atraso e apresente o valor final a pagar, assim como o valor do acréscimo e do desconto.*/

#include <stdio.h>

int main()
{
    float prestacao, acrescimo, acrescimo_total, prestacao_acre, desconto, resultado;

    printf("Insira o valor da prestacao atrasada: ");
    scanf("%f", &prestacao);
    acrescimo = prestacao * 0.1;
    desconto = acrescimo * 0.1;
    acrescimo_total = acrescimo - desconto;
    prestacao_acre = prestacao + acrescimo;
    resultado = prestacao_acre - desconto;

    printf("O valor acrecido foi de: %.2f e o valor final a ser pago eh: %.2f", acrescimo_total, resultado);
    return 0;
}