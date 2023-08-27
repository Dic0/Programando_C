#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media <= 3)
    {
        printf("voce esta reporvado :(!, sua media foi: %.2f", media);
        return 0;
    }
    else if (media <=7)
    {
        printf("voce esta de exame :/!, sua media foi: %.2f", media);
        return 0;
    }

    else
    {
        printf("voce esta aprovado :)!, sua media foi: %.2f", media);
        return 0;
    }
}