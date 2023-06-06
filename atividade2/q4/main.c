#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso;
    int genero;

    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    printf("Insira 1 se seu genero for masculino e 2 se for feminino: ");
    scanf("%d", &genero);

    if (genero == 1)
    {
        peso = (72.7 * altura) - 58;
        printf("o peso ideal para voce eh: %0.2f", peso);
        return 0;
    }
    else if (genero == 2)
    {
        peso = (62.1 * altura) - 44.7;
        printf("o peso ideal para voce eh: %0.2f", peso);
        return 0;
    }
    
    else
    {
        printf("por favor insirir o valor correto para seu genero");
        return 0;
    }
}