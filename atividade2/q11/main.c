#include <stdio.h>

int main()
{
    int cEstado, cCarga;
    float pCaminhao, custoCarga, impostoCarga = 0;
    const float pCC1 = 100.0, pCC2 = 250.0, pCC3 = 340.0;
    printf("-------------------------\n");
    printf("Codigo do Estado \t Imposto\n");
    printf("-------------------------\n");
    printf("1 \t 35%%\n");
    printf("2 \t 25%%\n");
    printf("3 \t 15%%\n");
    printf("4 \t 5%%\n");
    printf("5 \t Isento\n");
    printf("Digite o codigo do estado\n");
    scanf("%i", &cEstado);
    printf("-------------------------\n");
    printf("Codigo da Carga \t Preco por quilo (R$)\n");
    printf("-------------------------\n");
    printf("10 a 20 \t %f\n", pCC1);
    printf("21 a 30 \t %f\n", pCC2);
    printf("31 a 40 \t %f\n", pCC3);
    printf("Digite o codigo da carga\n");
    scanf("%i", &cCarga);
    printf("Digite o peso do caminhao em toneladas\n");
    scanf("%f", &pCaminhao);

    // Convete o peso da carga do caminhão em quilos
    pCaminhao = pCaminhao * 1000.0;

    // Custo da carga
    switch (cCarga)
    {
    case 10 ... 20:
    {
        custoCarga = pCaminhao * pCC1;
        break;
    }
    case 21 ... 30:
    {
        custoCarga = pCaminhao * pCC2;
        break;
    }
    case 31 ... 40:
    {
        custoCarga = pCaminhao * pCC3;
        break;
    }
    }

    switch (cEstado)
    {
    case 1:
    {
        impostoCarga = custoCarga * 0.35;
        break;
    }
    case 2:
    {
        impostoCarga = custoCarga * 0.25;
        break;
    }
    case 3:
    {
        impostoCarga = custoCarga * 0.15;
        break;
    }
    case 4:
    {
        impostoCarga = custoCarga * 0.05;
        break;
    }
    }
    return 0;

    printf("Peso do caminhao: \t %.1f \n", pCaminhao);
    printf("Valor da carga: \t %.2f \n", custoCarga);
    if (cEstado != 5)
    {
        printf("Valor do imposto: \t %.2f, Codigo do Estado \t %i \n", impostoCarga, cEstado);
    }
    else
    {
        printf("Valor do imposto: \t ISENTO, Código do Estado \t %i \n", cEstado);
    }
    pCaminhao = custoCarga + impostoCarga;
    printf("Valor total (Carga + impostos): \t %.2f \n", pCaminhao);
    return 0;
}