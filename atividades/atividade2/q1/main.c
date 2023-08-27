#include <stdio.h>
#include <math.h>

int main()
{
    float salario, quinze, dez, cinco;

    printf("Insira o valor do seu salario: ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        quinze = salario * 0.15;
        printf("O valor do reajuste eh: %.2f, e total do salario com o reajuste eh: %.2f", quinze, salario + quinze);
        return 0;
    }
    else if (salario >= 500 && salario <= 1000)
    {
        dez = salario * 0.10;
        printf("O valor do reajuste eh: %.2f, e total do salario com o reajuste eh: %.2f", dez, salario + dez);
        return 0;
    }

    else
    {
        cinco = salario * 0.05;
        printf("O valor do reajuste eh: %.2f, e total do salario com o reajuste eh: %.2f", cinco, salario + cinco);
        return 0;
    }
}