#include <stdio.h>
#include <math.h>

int main()
{
    int anoatual, anonasc, idade;

    printf("Insira o ano atual: ");
    scanf("%d", &anoatual);
    printf("Insira o ano de nascimento: ");
    scanf("%d", &anonasc);

    idade = anoatual - anonasc;


    if (idade < 16)
    {
        printf("voce tem %d anos de vida", idade);
        return 0;
    }
    else if (idade < 18)
    {
        printf("voce tem %d anos de vida e ja possui idade para poder votar", idade);
        return 0;
    }
    else
    {
        printf("voce tem %d anos de vida e ja possui idade para poder votar e ter carteira de habilitacao", idade);
        return 0;
    }
}