#include <stdio.h>
#include <math.h>

int main()
{
    float valor, resultado;
    int codigo;

    printf("Insira o valor do produto: ");
    scanf("%f", &valor);      

    printf("\n    CODIGO                          CONDICAO DE PAGAMENTO\n\n      1               A vista em dineiro ou cheque, recebe 10%% de desconto\n      2                A vista no cartao de credito, recebe 5%% de desconto\n      3                Em duas vezes, preco normal de etiqueta sem juros\n      4             Em tres vezes, preco normal de etiqueta masi juros de 10%%\n");

    printf("\nInsira o codigo da forma do pagamento: ");
    scanf("%d", &codigo);

    if (codigo == 1)
    {
        resultado = valor * 0.90;
        printf("O valor final da dua compra sera: %.2f ", resultado);
        return 0;
    }
    if (codigo == 2)
    {
        resultado = valor * 0.95 ;
        printf("O valor final da dua compra sera: %.2f ", resultado);
        return 0;
    }
    if (codigo == 3)
    {
        resultado = valor;
        printf("O valor final da dua compra sera: %.2f ", resultado);
        return 0;
    }
    if (codigo == 4)
    {
        resultado = valor * 1.1 ;
        printf("O valor final da dua compra sera: %.2f ", resultado);
        return 0;
    }
    else
    {
        printf("Operacao desconhecida!");
        return 0;
    }
}