#include <stdio.h>
int main()
{
    int n, cont, soma = 0;
    puts("Digite um número");
    scanf("%i", &n);
    for (cont = 1; cont < n; cont++)
    {
        if ((n % cont) == 0)
        {
            soma += cont;
        }
    }
    if (soma == n)
    {
        puts("Perfeito");
    }
    else
    {
        puts("Não é perfeito");
    }
    return 0;
}