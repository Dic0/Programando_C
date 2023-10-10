#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _lutador{
    char nome[40];
    float altura, peso;
    int idade;
} Lutador;

typedef struct _torneio{
    char nome[40];
    char local[40];
    char categoria[40];
    int numLutadores;
    Lutador *lutadores[100];
} Torneio;

Lutador *cadastrarLutador(){
    Lutador *novoLutador = malloc(sizeof(Lutador));
    printf("Digite o nome do lutador: ");
    scanf(" %[^\n]s", novoLutador->nome);
    printf("Digite a altura do lutador: ");
    scanf("%f", &novoLutador->altura);
    printf("Digite o peso do lutador: ");
    scanf("%f", &novoLutador->peso);
    printf("Digite a idade do lutador: ");
    scanf("%d", &novoLutador->idade);

    return novoLutador;
}

Torneio *cadastrarTorneio(){
    Torneio *novoTorneio = malloc(sizeof(Torneio));
    novoTorneio->numLutadores = 0;

    printf("Digite o nome do Torneio: ");
    scanf(" %[^\n]s", novoTorneio->nome);
    printf("Digite o local do Torneio: ");
    scanf(" %[^\n]s", novoTorneio->local);
    printf("Digite a categoria de lutas do Torneio: ");
    scanf(" %[^\n]s", novoTorneio->categoria);

    return novoTorneio;
}

void editarLutador(Lutador *lutadores[], int numLutadores){

    if (numLutadores == 0){
        printf("\nNenhum Lutador foi cadastrado para realizar edicoes.");
    }
    else{
        char nomeLutador[50];
        int i, opcao;

        printf("\nEscreva o nome do Lutador que deseja editar: ");
        scanf(" %[^\n]s", nomeLutador);

        for (i = 0; i < numLutadores; i++){
            if (strcasecmp(nomeLutador, lutadores[i]->nome) == 0){
                printf("\n1 - Para editar o nome do Lutador: ");
                printf("\n2 - Para editar a altura do Lutador: ");
                printf("\n3 - Para editar o peso do Lutador: ");
                printf("\n4 - Para editar a idade do Lutador: ");
                printf("\n\nSelecione uma opcao: ");
                scanf("%d", &opcao);

                switch (opcao){
                case 1:
                    printf("\nDigite o novo nome do Lutador: ");
                    scanf(" %[^\n]s", lutadores[i]->nome);
                    break;
                case 2:
                    printf("\nDigite a nova altura do Lutador: ");
                    scanf("%f", &lutadores[i]->altura);
                    break;
                case 3:
                    printf("\nDigite o novo peso do Lutador: ");
                    scanf("%f", &lutadores[i]->peso);
                    break;
                case 4:
                    printf("\nDigite a nova idade do Lutador: ");
                    scanf("%d", &lutadores[i]->idade);
                    break;

                default:
                    printf("\nOpcao invalida!");
                    break;
                }
            }
        }
    }
}

void listarLutadores(Lutador *lutadores[], int numLutadores){
    int i;
    for (i = 0; i < numLutadores; i++){
        printf(" %s\n", lutadores[i]->nome);
    }
}

void editarTorneio(Torneio *torneios[], int numTorneios){
    if (numTorneios == 0){
        printf("\nNenhum Torneio foi cadastrado para realizar edicoes.");
    }
    else{
        char nomeTorneio[50];
        int i, opcao;

        printf("\nEscreva o nome do Torneio que deseja editar: ");
        scanf(" %[^\n]s", nomeTorneio);

        for (i = 0; i < numTorneios; i++){
            if (strcasecmp(nomeTorneio, torneios[i]->nome) == 0){
                printf("\n1 - Para editar o nome do Torneio: ");
                printf("\n2 - Para editar o local do Torneio: ");
                printf("\n3 - Para editar a categoria do Torneio: ");
                printf("\n\nSelecione uma opcao: ");
                scanf("%d", &opcao);

                switch (opcao){
                case 1:
                    printf("\nDigite o novo nome do Torneio: ");
                    scanf(" %[^\n]s", torneios[i]->nome);
                    break;
                case 2:
                    printf("\nDigite o novo local do Torneio: ");
                    scanf(" %[^\n]s", torneios[i]->local);
                    break;
                case 3:
                    printf("\nDigite a nova categoria de luta do Torneio: ");
                    scanf(" %[^\n]s", torneios[i]->categoria);
                    break;

                default:
                    break;
                }
            }
        }
    }
}

void listarTorneios(Torneio *torneios[], int numTorneios){
    int i, j;
    for (i = 0; i < numTorneios; i++){
        printf("Torneio: %s\n", torneios[i]->nome);
        printf("Lutadores no Torneio:\n");

        for (j = 0; j < torneios[i]->numLutadores; j++){
            printf(" - %s\n", torneios[i]->lutadores[j]->nome);
        }
        printf("\n");
    }
}

void deletarTorneio(Torneio *torneios[], int numTorneios){
    if (numTorneios == 0){
        printf("\nNenhum time foi cadastrado para realizar a remocao\n\n");
    }
    else{
        char nomeTorneio[50];
        int i, encontrei = 0;

        printf("\nEscreva o nome do Torneio que deseja remover: \n");
        scanf(" %[^\n]s", nomeTorneio);

        for (i = 0; i < numTorneios; i++){
            if (strcasecmp(nomeTorneio, torneios[i]->nome) == 0){
                encontrei = 1;
            }
            if (encontrei){
                if (i < numTorneios - 1) // verifica se existe algo na proxima posicao do vetor
                    torneios[i] = torneios[i + 1];
            }
        }
        if (encontrei){
            printf("\nOperacao realizada com sucesso!\n\n");
        }
        else{
            printf("\nTorneio nao encontrado!\n\n");
        }
    }
}

void adicionarLutadorAoTorneio(Torneio *torneios[], int numTorneios, Lutador *lutadores[], int numLutadores){
    if (numTorneios == 0 || numLutadores == 0){
        printf("\nNenhum Torneio ou Lutador cadastrado para adicionar ao Torneio.\n");
    }
    else{
        char nomeTorneio[50];
        char nomeLutador[50];
        int i, j;

        listarTorneios(torneios, numTorneios);

        printf("\nEscreva o nome do Torneio ao qual deseja adicionar um Lutador: ");
        scanf(" %[^\n]s", nomeTorneio);

        for (i = 0; i < numTorneios; i++){
            if (strcasecmp(nomeTorneio, torneios[i]->nome) == 0){
                listarLutadores(lutadores, numLutadores);
                printf("\nEscreva o nome do Lutador que deseja adicionar ao Torneio: ");
                scanf(" %[^\n]s", nomeLutador);

                for (j = 0; j < numLutadores; j++){
                    if (strcasecmp(nomeLutador, lutadores[j]->nome) == 0){
                        // Adicionar o lutador ao torneio
                        if (torneios[i]->numLutadores < 100){
                            torneios[i]->lutadores[torneios[i]->numLutadores] = lutadores[j];
                            torneios[i]->numLutadores++;
                            printf("\nLutador %s adicionado ao Torneio %s com sucesso!\n", lutadores[j]->nome, torneios[i]->nome);
                        }
                        else{
                            printf("\nO Torneio atingiu o limite de lutadores.\n");
                        }
                        break; // Não é necessário continuar procurando após encontrar o lutador
                    }
                }

                if (j == numLutadores){
                    printf("\nLutador não encontrado.\n");
                }

                break; // Não é necessário continuar procurando após encontrar o torneio
            }
        }

        if (i == numTorneios){
            printf("\nTorneio não encontrado.\n");
        }
    }
}

void removerLutadorDoTorneioEscolhido(Torneio *torneios[], int numTorneios, int numLutadores){
    if (numLutadores == 0){
        printf("\nNenhum Lutador cadastrado para remover do Torneio.\n");
    }
    else{
        char nomeTorneio[50];
        char nomeLutador[50];
        int i, j, k;

        listarTorneios(torneios, numTorneios);

        printf("\nEscreva o nome do Torneio do qual deseja remover um Lutador: ");
        scanf(" %[^\n]s", nomeTorneio);

        for (i = 0; i < numTorneios; i++){
            if (strcasecmp(nomeTorneio, torneios[i]->nome) == 0){
                listarLutadores(torneios[i]->lutadores, torneios[i]->numLutadores);
                printf("\nEscreva o nome do Lutador que deseja remover do Torneio: ");
                scanf(" %[^\n]s", nomeLutador);

                for (j = 0; j < torneios[i]->numLutadores; j++){
                    if (strcasecmp(nomeLutador, torneios[i]->lutadores[j]->nome) == 0){
                        // Remover o lutador do torneio
                        for (k = j; k < torneios[i]->numLutadores - 1; k++){
                            torneios[i]->lutadores[k] = torneios[i]->lutadores[k + 1];
                        }
                        torneios[i]->numLutadores--;
                        printf("\nLutador %s removido do Torneio %s com sucesso!\n", nomeLutador, torneios[i]->nome);
                        return; // Lutador encontrado e removido, sair da função
                    }
                }

                if (j == torneios[i]->numLutadores){
                    printf("\nLutador nao encontrado no Torneio %s.\n", torneios[i]->nome);
                }

                break; // Não é necessário continuar procurando após encontrar o torneio
            }
        }

        if (i == numTorneios){
            printf("\nTorneio nao encontrado.\n");
        }
    }
}

int main(){
    Lutador *lutadores[100];
    Torneio *torneios[100];
    int opcao, opcaoLutador;
    int numTorneios = 0;
    int numLutadores = 0;
    char sair, reiniciar;

    do{
        printf("\n\n\tMENU\n");
        printf("\n1 - Cadastrar um novo Lutador:");
        printf("\n2 - Editar uma caracteristica do Lutador:");
        printf("\n3 - Listar todos os Lutadores:");
        printf("\n4 - Cadastrar Torneio:");
        printf("\n5 - Listar Torneios:");
        printf("\n6 - Editar nome, adicionar ou remover Lutadores do Torneio:");
        printf("\n7 - Deletar Torneio:");
        printf("\n8 - Sair do programa");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d", &opcao);
        printf("\n\n");

        switch (opcao){
        case 1:
            lutadores[numLutadores] = cadastrarLutador();
            numLutadores++;
            break;
        case 2:
            listarLutadores(lutadores, numLutadores);
            editarLutador(lutadores, numLutadores);
            break;
        case 3:
            listarLutadores(lutadores, numLutadores);
            break;
        case 4:
            torneios[numTorneios] = cadastrarTorneio();
            numTorneios++;
            break;
        case 5:
            listarTorneios(torneios, numTorneios);
            break;
        case 6:
            if (numTorneios == 0){
                printf("\nNenhum Torneio foi cadastrado para realizar edicoes.");
            }
            else{
                do{
                    char nomeTorneio[50];
                    int i;

                    printf("\n1 - Para editar o nome do Torneio: ");
                    printf("\n2 - Para adicionar um Lutador ao Torneio: ");
                    printf("\n3 - Para remover um lutador do Torneio: ");
                    printf("\n4 - voltar ao menu principal ");
                    printf("\n\nSelecione uma opcao: ");
                    scanf("%d", &opcaoLutador);

                    switch (opcaoLutador){
                    case 1:

                        listarTorneios(torneios, numTorneios);

                        printf("\nEscreva o nome do Torneio que deseja editar: ");
                        scanf(" %[^\n]s", nomeTorneio);
                        for (i = 0; i < numTorneios; i++){
                            if (strcasecmp(nomeTorneio, torneios[i]->nome) == 0){
                                printf("\nDigite o novo nome do Torneio: ");
                                scanf(" %[^\n]s", torneios[i]->nome);
                            }
                        }
                        break;
                    case 2:
                        adicionarLutadorAoTorneio(torneios, numTorneios, lutadores, numLutadores);
                        break;
                    case 3:
                        removerLutadorDoTorneioEscolhido(torneios, numTorneios, numLutadores);
                        break;
                    case 4:
                        printf("Deseja voltar ao menu principal? (S/N): ");
                        scanf(" %c", &reiniciar);
                        break;

                    default:
                        printf("\nOpcao inexistente!\n\n");
                    }

                    if (opcaoLutador != 4){
                        reiniciar = 'n';
                    }
                } while (reiniciar == 'N' || reiniciar == 'n');
            }
            break;
        case 7:
            listarTorneios(torneios, numTorneios);
            deletarTorneio(torneios, numTorneios);
            numTorneios--;
            break;
        case 8:
            printf("Deseja sair? (S/N): ");
            scanf(" %c", &sair);
            break;

        default:
            puts("Opcao Invalida!");
            break;
        }

        if (opcao != 8){
            sair = 'n';
        }

    } while (sair == 'N' || sair == 'n');

    return 0;
}