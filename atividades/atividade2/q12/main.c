#include <stdio.h>

int main()
{
    float a;
    int b;
    printf("Digite o preço e o codigo da procedencia do produto\n");
    scanf("%f %i", &a, &b);

    switch (b)
    {
    case 1:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Sul\n", a, b);
        break;
    }
    case 2:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Norte\n", a, b);
        break;
    }
    case 3:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Leste\n", a, b);
        break;
    }
    case 4:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Oeste\n", a, b);
        break;
    }
    case 5 ... 6:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Nordeste\n", a, b);
        break;
    }
    case 7 ... 9:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Sudeste\n", a, b);
        break;
    }
    case 10 ... 20:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Centro-Oeste\n", a, b);
        break;
    }
    case 25 ... 30:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Noroeste\n", a, b);
        break;
    }
    default:
    {
        printf("Valor do produto R$ %.2f - Procedencia (%i) - Importado\n", a, b);
    }
    }
    return 0;
}