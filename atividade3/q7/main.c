#include <stdio.h>
int main()
{
    int base, expoente, c, r = 0;
    puts("Digite a base e o expoente");
    scanf("%i%i", &base, &expoente);

    if (expoente == 1)
    {
        r = base;
    }
    else if (expoente == 0)
    {
        r = 1;
    }
    else
    {
        r = base;
        for (c = 1; c < expoente; c++)
        {
            r *= base;
        }
    }
    printf("Resultado %i\n", r);
    return 0;
}