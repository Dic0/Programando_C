#include <stdio.h>
#include <math.h>

int main()
{
    float numero1, numero2, resultado;
    int codigo;

    printf("Insira o primeiro valor: ");
    scanf("%f", &numero1);    
    printf("Insira o segundo valor: ");
    scanf("%f", &numero2);    

    printf("\n    CODIGO      OPERACAO ARITMETICA\n\n      1               adicao\n      2             subtracao\n      3           multipicacao\n      4              divisao\n");

    printf("\nInsira o codigo da operacao escolhida: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        resultado = numero1 + numero2;
        printf("O valor da operacao escolhida eh: %.2f ", resultado);
        return 0;
    }
    if (codigo == 2)
    {
        resultado = numero1 - numero2;
        printf("O valor da operacao escolhida eh: %.2f ", resultado);
        return 0;
    }
    if (codigo == 3)
    {
        resultado = numero1 * numero2;
        printf("O valor da operacao escolhida eh: %.2f ", resultado);
        return 0;
    }
    if (codigo == 4)
    {
        resultado = numero1 / numero2;
        printf("O valor da operacao escolhida eh: %.2f ", resultado);
        return 0;
    }
    else
    {
        printf("Operacao desconhecida!");
        return 0;
    }
}