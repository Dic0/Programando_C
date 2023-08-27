#include <stdio.h>
#include <string.h> //para incluir string em c

typedef struct _filme
{ // definir o tipo do struct, usar um nome 'falso'
    char titulo[30];
    char genero[30];
    int ano;
    float duracao;
} Filme; // nome do struct

typedef struct _personagem
{
    char nome[30];
    int idade;
    char nomeAtor[30];
    int quantFilmes;
} Personagem;

int main()
{

    /*Filme f;
    strcpy(f.titulo, "Pulp Fiction"); //atribuir o nome do filme
    strcpy(f.genero, "Crime");
    f.duracao = 120;
    f.ano = 1994;
    printf("Titulo: %s \ngenero: %s \nano: %d \nduracao: %.1f\n",f.titulo,f.genero, f.ano,f.duracao);
        //%s é usado para imprmir string


    Personagem p;
    scanf(" %[^\n]s", p.nome);
    scanf(" %d", &p.idade);
    scanf(" %[^\n]s", p.nomeAtor);
    scanf(" %d", &p.quantFilmes);

    printf("\nNome:%s \nIdade: %d \nNome Artistico: %s \nQuantidade de Filmes: %d",
        p.nome,p.idade,p.nomeAtor,p.quantFilmes);
    */

    Personagem personagens[5];

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do personagem %d, ator, e a idade");
        scanf(" %[^\n]s", personagens[i].nome);
        scanf(" %d", &personagens[i].idade);
        scanf(" %[^\n]s", personagens[i].nomeAtor);
        }

    return 0;
}