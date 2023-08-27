#include <stdio.h>

int main()
{
    int divisor, dividendo = 1;
    double soma = 0.0;
    for (divisor = 1; divisor < 51; divisor++)
    {
        soma += (double)dividendo / (double)divisor;
        dividendo += 2;
    }
    printf("Soma = %lf\n", soma);
    return 0;
}