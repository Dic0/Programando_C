#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _jogador
{
    char nome[40];
    float altura;
    int numCamisa, idade, titulosCarreira;
} Jogador;

typedef struct _timeBasquete
{
    char nome[40];
    char tecnico[40];
    char conferencia[40];
    int numTitulos, anoFundacao, numJogadores;
    Jogador jogadores[100];
} TimeBasquete;

TimeBasquete cadastrarTime(TimeBasquete basquete[], int numTimes)
{

    TimeBasquete novoTime;
    novoTime.numJogadores = 0;
    char sair = 'n';

    if (numTimes == 0)
    {
        printf("\nEscreva o nome do Time:");
        scanf(" %[^\n]s", novoTime.nome);
        printf("\nEscreva o nome do Tecnico do Time:");
        scanf(" %[^\n]s", novoTime.tecnico);
        printf("\nEscreva a qual conferencia esse time pertence:");
        scanf(" %[^\n]s", novoTime.conferencia);
        printf("\nEscreva quantos titulos esse time possui:");
        scanf("%d", &novoTime.numTitulos);
        printf("\nEscreva o ano de Fundacao do Time:");
        scanf("%d", &novoTime.anoFundacao);
        printf("\n");
    }
    else
    {
        do
        {
            printf("\nEscreva o nome do Time:");
            scanf(" %[^\n]s", novoTime.nome);

            int i, nomeExistente = 0;

            for (i = 0; i < numTimes; i++)
            {
                if (strcasecmp(novoTime.nome, basquete[i].nome) == 0)
                {
                    printf("\nEsse nome de time ja existe!\n");
                    nomeExistente = 1; // Nome correspondente encontrado
                    break;             // Saia do loop, já que encontramos um nome igual
                }
            }
            if (!nomeExistente)
            {
                sair = 'n'; // Define sair como 'n' apenas se nenhum nome correspondente foi encontrado
            }
            else
            {
                sair = 's';
            }

        } while (sair == 's');

        printf("Escreva o nome do Tecnico do Time:");
        scanf(" %[^\n]s", novoTime.tecnico);
        printf("Escreva a qual conferencia esse time pertence:");
        scanf(" %[^\n]s", novoTime.conferencia);
        printf("Escreva quantos titulos esse time possui:");
        scanf("%d", &novoTime.numTitulos);
        printf("Escreva o ano de Fundacao do Time:");
        scanf("%d", &novoTime.anoFundacao);
        printf("\n");
    }
    return novoTime;
}

void listarTimes(TimeBasquete basquete[], int numTimes, int opcao)
{
    if (numTimes == 0 && opcao == 2)
    {
        printf("\nNenhum time foi cadastrado\n\n");
    }
    else
    {
        int i;
        for (i = 0; i < numTimes; i++)
        {
            printf("\nNome do Time %d: - %s\n", i + 1, basquete[i].nome);
        }
    }
}

void editarTime(TimeBasquete basquete[], int numTimes)
{

    if (numTimes == 0)
    {
        printf("\nNenhum time foi cadastrado para realizar as edicoes\n\n");
    }
    else
    {
        char nomeTimes[50];
        int i, opcao;

        printf("\nEscreva o nome do Time que deseja editar: \n");
        scanf(" %[^\n]s", nomeTimes);

        for (i = 0; i < numTimes; i++)
        {
            if (strcasecmp(nomeTimes, basquete[i].nome) == 0)
            {
                // compara duas strings
                printf("\n1 - Para editar o nome do Time: ");
                printf("\n2 - Para editar o tecnico do Time: ");
                printf("\n3 - Para editar a conferencia do Time: ");
                printf("\n4 - Para editar o numero de Titulos: ");
                printf("\n5 - Para editar o ano de Fundacao do Time: ");
                printf("\n\nSelecione uma opcao :");
                scanf("%d", &opcao);

                switch (opcao)
                {
                case 1:
                    printf("\n\nDigite o novo nome do Time: ");
                    scanf(" %[^\n]s", basquete[i].nome);
                    break;
                case 2:
                    printf("Digite o novo tecnico do Time: ");
                    scanf(" %[^\n]s", basquete[i].tecnico);
                    break;
                case 3:
                    printf("Digite a nova conferencia do Time: ");
                    scanf(" %[^\n]s", basquete[i].conferencia);
                    break;
                case 4:
                    printf("Digite o novo numero de titulos do Time: ");
                    scanf("%d", &basquete[i].numTitulos);
                    break;
                case 5:
                    printf("Digite o novo ano de Fundacao do Time: ");
                    scanf("%d", &basquete[i].anoFundacao);
                    break;
                default:
                    printf("\nOpcao Invalida!\n\n");
                    return;
                }
                printf("\nOperacao realizada com sucesso!\n\n");
                return;
            }
        }
        printf("\nTime nao encontrado!\n\n");
    }
}

void removerTime(TimeBasquete basquete[], int numTimes)
{
    if (numTimes == 0)
    {
        printf("\nNenhum time foi cadastrado para realizar a remocao\n\n");
    }
    else
    {
        char nomeTime[50];
        int i, encontrei = 0;

        printf("\nEscreva o nome do Time que deseja remover: \n");
        scanf(" %[^\n]s", nomeTime);

        for (i = 0; i < numTimes; i++)
        {
            if (strcasecmp(nomeTime, basquete[i].nome) == 0)
            {
                encontrei = 1;
            }
            if (encontrei)
            {
                if (i < numTimes - 1) // verifica se existe algo na proxima posicao do vetor
                    basquete[i] = basquete[i + 1];
            }
        }
        if (encontrei)
        {
            printf("\nOperacao realizada com sucesso!\n\n");
        }
        else
        {
            printf("\nTime nao encontrado!\n\n");
        }
    }
}

Jogador cadastrarJogador(Jogador jogadores[], int numJogadores)
{
    Jogador novoJodador;
    char sair = 'n';

    if (numJogadores == 0)
    {
        printf("\nEscreva o nome do Jogador:");
        scanf(" %[^\n]s", novoJodador.nome);
        printf("Escreva a altura do Jogador:");
        scanf("%f", &novoJodador.altura);
        printf("Escreva o numero da camisa do Jogador:");
        scanf("%d", &novoJodador.numCamisa);
        printf("Escreva a idade do Jogador:");
        scanf("%d", &novoJodador.idade);
        printf("Escreva o numero de Titulos da carreira do Jogador:");
        scanf("%d", &novoJodador.titulosCarreira);
    }
    else
    {

        printf("\nEscreva o nome do Jogador:");
        scanf(" %[^\n]s", novoJodador.nome);
        printf("Escreva a altura do Jogador:");
        scanf("%f", &novoJodador.altura);

        do
        {
            printf("Escreva o numero da camisa do Jogador:");
            scanf("%d", &novoJodador.numCamisa);

            int i, numeroExistente = 0;

            for (i = 0; i < numJogadores; i++)
            {
                if (novoJodador.numCamisa == jogadores[i].numCamisa)
                {
                    printf("\nJa existe um jogador com esse numero!\n\n");
                    numeroExistente = 1;
                    break;
                }
            }
            if (!numeroExistente)
            {
                sair = 'n';
            }
            else
            {
                sair = 's';
            }

        } while (sair == 's');

        printf("Escreva a idade do Jogador:");
        scanf("%d", &novoJodador.idade);
        printf("Escreva o numero de Titulos da carreira do Jogador:");
        scanf("%d", &novoJodador.titulosCarreira);
    }

    return novoJodador;
}

void listarJogador(Jogador jogadores[], int numJogadores, int opcaoJogador)
{

    if (numJogadores == 0 && opcaoJogador == 2)
    {
        printf("\nNenhum jogador foi cadastrado\n\n");
    }
    else
    {
        int i;
        for (i = 0; i < numJogadores; i++)
        {
            printf("\nNome do Jogador %d: - %s\n", i + 1, jogadores[i].nome);
        }
    }
}

void editarJogador(Jogador jogadores[], int numJogadores)
{
    if (numJogadores == 0)
    {
        printf("\nNenhum jogador foi cadastrado para realizar as edicoes\n\n");
    }
    else
    {
        char nomeJogadores[50];
        int i, opcao;

        printf("\nEscreva o nome do Jogador que deseja editar: \n");
        scanf(" %[^\n]s", nomeJogadores);

        for (i = 0; i < numJogadores; i++)
        {
            if (strcasecmp(nomeJogadores, jogadores[i].nome) == 0)
            {
                // compara duas strings
                printf("\n1 - Para editar o nome do Jogador: ");
                printf("\n2 - Para editar a altura do Jogador: ");
                printf("\n3 - Para editar o numero da camisa do Jogador: ");
                printf("\n4 - Para editar a idade do Jogador: ");
                printf("\n5 - Para editar o numero de Titulos da carreira do Jogador: ");
                printf("\n\nSelecione uma opcao: ");
                scanf("%d", &opcao);

                switch (opcao)
                {
                case 1:
                    printf("\nDigite o novo nome do Jogador: ");
                    scanf(" %[^\n]s", jogadores[i].nome);
                    break;
                case 2:
                    printf("Digite o nova altura do jogador: ");
                    scanf("%f", &jogadores[i].altura);
                    break;
                case 3:
                    printf("Digite o novo numero da camisa do jogador: ");
                    scanf("%d", &jogadores[i].numCamisa);
                    break;
                case 4:
                    printf("Digite a nova idade do jogador: ");
                    scanf("%d", &jogadores[i].idade);
                    break;
                case 5:
                    printf("Digite o novo numero de titulos da carreira do jogador: ");
                    scanf("%d", &jogadores[i].titulosCarreira);
                    break;
                default:
                    printf("\nOpcao Invalida!\n\n");
                    return;
                }
                printf("\nOperacao realizada com sucesso!\n\n");
                return;
            }
        }
        printf("\nTime nao encontrado!\n\n");
    }
}

void removerJogador(Jogador jogadores[], int numJogador)
{
    if (numJogador == 0)
    {
        printf("\nNenhum jogador foi cadastrado para realizar a remocao\n\n");
    }
    else
    {
        char nomeJogadores[50];
        int i, achei = 0;

        printf("\nEscreva o nome do jogador que deseja remover: \n");
        scanf(" %[^\n]s", nomeJogadores);

        for (i = 0; i < numJogador; i++)
        {
            if (strcasecmp(nomeJogadores, jogadores[i].nome) == 0)
            {
                achei = 1;
            }
            if (achei)
            {
                if (i < numJogador - 1) // verifica se existe algo na proxima posicao do vetor
                    jogadores[i] = jogadores[i + 1];
            }
        }
        if (achei)
        {
            printf("\nOperacao realizada com sucesso!\n\n");
        }
        else
        {
            printf("\nJogador nao encontrado!\n\n");
        }
    }
}

int main()
{
    TimeBasquete basquete[100];
    int numTimes = 0;
    int opcao, selecionarTime, opcaoJogador;
    char reiniciar, sair;

    do
    {
        printf("\n\n\tMENU\n");
        printf("\n1 - Cadastrar um novo time de Basquete:");
        printf("\n2 - Listar todos os times de Basquete:");
        printf("\n3 - Editar um elemento do time de Basquete:");
        printf("\n4 - Remover um elemento do time de Basquete:");
        printf("\n5 - Criar, editar ou remover um Jogador do time de Basquete:");
        printf("\n6 - Sair do programa");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d", &opcao);
        printf("\n\n");

        switch (opcao)
        {
        case 1:
            basquete[numTimes] = cadastrarTime(basquete, numTimes);
            numTimes++;
            break;
        case 2:
            listarTimes(basquete, numTimes, opcao);
            break;
        case 3:
            listarTimes(basquete, numTimes, opcao);
            editarTime(basquete, numTimes);
            break;
        case 4:
            listarTimes(basquete, numTimes, opcao);
            removerTime(basquete, numTimes);
            numTimes--;
            break;
        case 5:
            if (numTimes > 0)
            {
                listarTimes(basquete, numTimes, opcao);
                printf("\n\n");
                printf("Selecione o time no qual deseja criar, editar ou remover os jogadores:");
                scanf("%d", &selecionarTime);
                if (selecionarTime > 0 && selecionarTime <= numTimes)
                {

                    do
                    {
                        printf("\n\n\tMENU\n");
                        printf("\n1 - Cadastrar um novo Jogador:");
                        printf("\n2 - Listar todos os Jogadores:");
                        printf("\n3 - Editar os dados de um Jogador:");
                        printf("\n4 - Remover um Jogador:");
                        printf("\n5 - Voltar ao menu principal");
                        printf("\n\nSelecione uma opcao: ");
                        scanf(" %d", &opcaoJogador);
                        printf("\n\n");

                        switch (opcaoJogador)
                        {
                        case 1:
                            basquete[selecionarTime - 1].jogadores[basquete[selecionarTime - 1].numJogadores] = cadastrarJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores);
                            basquete[selecionarTime - 1].numJogadores++;
                            break;
                        case 2:
                            listarJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores, opcaoJogador);
                            break;
                        case 3:
                            listarJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores, opcaoJogador);
                            editarJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores);
                            break;
                        case 4:
                            listarJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores, opcaoJogador);
                            removerJogador(basquete[selecionarTime - 1].jogadores, basquete[selecionarTime - 1].numJogadores);
                            basquete[selecionarTime - 1].numJogadores--;
                            break;
                        case 5:
                            printf("Deseja voltar ao menu principal? (S/N): ");
                            scanf(" %c", &reiniciar);
                            break;
                        default:
                            printf("\nOpcao inexistente!\n\n");
                        }

                        if (opcaoJogador != 5)
                        {
                            reiniciar = 'n';
                        }

                    } while (reiniciar == 'N' || reiniciar == 'n');
                    break;
                }
                else
                {
                    printf("\nOpcao inexistente!\n\n");
                }
            }
            else
            {
                printf("\nPrimeiro e necessario cadastrar um time!\n");
            }

        case 6:
            printf("Deseja sair? (S/N): ");
            scanf(" %c", &sair);
            break;
        default:
            printf("\nOpcao Invalida!\n\n");
        }

        if (opcao != 6)
        {
            sair = 'n';
        }

    } while (sair == 'N' || sair == 'n');

    return 0;
}