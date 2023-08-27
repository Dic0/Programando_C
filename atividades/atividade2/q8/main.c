#include <stdio.h>
#include <math.h>

int main()
{
    float tqdigito, operacao1, nasc;
    int psdigito, soma;

    printf("Insira o ano de seu nascimento: ");
    scanf("%f", &nasc);

    psdigito = nasc / 100;
    operacao1 = (nasc / 100) - psdigito;
    tqdigito = operacao1 * 100;
    soma = psdigito + tqdigito;

    if (soma % 5 == 0)
    {
        printf("O seu perfil eh Timido");
        return 0;
    }
    if (soma % 5 == 1)
    {
        printf("O seu perfil eh Sonhador");
        return 0;
    }
    if (soma % 5 == 2)
    {
        printf("O seu perfil eh Paquerador");
        return 0;
    }
    if (soma % 5 == 3)
    {
        printf("O seu perfil eh Atraente");
        return 0;
    }
    if (soma % 5 == 4)
    {
        printf("O seu perfil eh Irresistivel");
        return 0;
    }
    return 0;
}