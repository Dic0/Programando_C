#include <stdio.h>
int main()
{
    int n, fatorial = 1, c;
    puts("Qual é o fatorial que deseja saber");
    scanf("%i", &n);

    if (n == 0)
    {
        fatorial = 1;
    }
    else
    {
        for (c = n; c >= 1; c--)
        {
            fatorial *= c;
            printf("C = %i | Fatorial = %i\n", c, fatorial);
        }
    }
    puts("------");
    printf("%i! = %i\n", n, fatorial);
    return 0;
}