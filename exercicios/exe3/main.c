#include <stdio.h>

void main()
{
    float salario = 7.36, despesas = 10.23, salTotal = 0.0, desTotal = 0.0, resto = 0.0, parcela = 0.0;
    int dias_trabalhados = 22;
    char nome = 'H';
    salTotal = salario * dias_trabalhados;
    desTotal = despesas * dias_trabalhados;
    resto = salTotal - desTotal;
    parcela = resto / 36;
    printf("Salario: %f\n", salario);
    printf("Dias trabalhados: %d\n", dias_trabalhados);
    printf("Despesas: %f\n", despesas);
    printf("Nome: %c\n", nome);
    printf("Salario total:: %f\n", salTotal);
    printf("Despesa total:: %f\n", desTotal);
    printf("O resto de seu salario e: %f\n", resto);
    printf("O valor de cada parcela ficara: %f\n", parcela);
}
