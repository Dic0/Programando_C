#include <stdio.h>
#include <string.h> //para incluir string em c

typedef struct _filme
{ // definir o tipo do struct, usar um nome 'falso'
    char titulo[20];
    char genero[20];
    int ano;
} Filme; // nome do struct

typedef struct _personagem
{ // definir o tipo do struct, usar um nome 'falso'
    char nome[20];
    int idade;
} Personagem; // nome do struct

Filme cadastrarFilme()
{
    Filme novoFilme;
    printf("\nDigite o nome do filme: ");
    scanf(" %[^\n]s", novoFilme.titulo); // %[^\n]s é o seguinte: %s seguinifica q é uma string e o [^\n] quer dizer que vai ser lido do inicio até um enter(\n) de uma string, e o ^ significa concatenação.
    printf("\nDigite o genero do filme: ");
    scanf(" %[^\n]s", novoFilme.genero);
    printf("\nDigite o ano do filme");
    scanf(" %d", &novoFilme.ano);
    printf("\n");

    return novoFilme;
}

Personagem cadastrarPersonagen()
{
    Personagem novoPersonagem;
    printf("\nDigite o nome do Personagem: ");
    scanf(" %[^\n]s", novoPersonagem.nome);
    printf("\nDigite a idade do Personagem: ");
    scanf(" %d", &novoPersonagem.idade);
    printf("\n");

    return novoPersonagem;
}

void listarFilmes(Filme filmes[], int numFilmes)
{
    int i;
    for (i = 0; i < numFilmes; i++)
    {
        printf("\nTitulo do filme %d - %s\n", i + 1, filmes[i].titulo);
        printf("Genero do filme %d - %s\n", i + 1, filmes[i].genero);
        printf("Ano do filme %d - %d\n", i + 1, filmes[i].ano);
    }

    if (numFilmes == 0)
    {
        printf("\nNenhum filme foi cadastrado\n\n");
    }
};

void listarPersonagem(Personagem personagens[], int numPersonagens)
{
    int i;
    for (i = 0; i < numPersonagens; i++)
    {
        printf("\nNome do Personagem %d - %s\n", i + 1, personagens[i].nome);
        printf("Idade do Personagem %d - %d\n", i + 1, personagens[i].idade);
    }

    if (numPersonagens == 0)
    {
        printf("\nNenhum Personagem foi cadastrado\n\n");
    }
};

int main()
{
    Filme filmes[100];
    Personagem personagens[100];
    int numFilmes = 0, numPersonagens = 0, opcao;

    while (1)
    {

        printf("\n\tMENU\n\n");
        printf("1 - para cadastrar um novo Filme\n");
        printf("2 - para listas os Filmes cadastrados\n");
        printf("3 - para cadastrar um novo Personagem\n");
        printf("4 - para listas os PErsonagens cadastrados\n");
        printf("\n\nSeleceione uma opcao:");
        scanf(" %d", &opcao);

        switch (opcao)
        {
        case 1:
            filmes[numFilmes] = cadastrarFilme();
            numFilmes++;
            break;
        case 2:
            listarFilmes(filmes, numFilmes);
            break;
        case 3:
            personagens[numPersonagens] = cadastrarPersonagen();
            numPersonagens++;
            break;
        case 4:
            listarPersonagem(personagens, numPersonagens);
            break;

        default:
            printf("Opcao Invalida");
            break;
        }
    }

    return 0;
}