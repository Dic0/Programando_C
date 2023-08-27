// acumulador.

#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 0, d = 0;

    a = a + 5;
    b += 5;
    c = c - 2;
    d -= 2;

    printf("A=%i \t B=%i \t C=%i \t D=%i \n", a, b, c, d);
    return 0;
}

// Operadores de incremento.

#include <stdio.h>

int main()
{

    int a = 0, b = 0, c = 0, d = 0;

    a++;
    b--;
    c = a--;
    d = --b;

    printf("A=%i \t B=%i \t C=%i \t D=%i \n", a, b, c, d);
    return 0;
}

// Estrutura de repetição contada.

#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Contando \t %i \n", i);
    }

    return 0;
}

// Estrutura de repetição pré-condção // Usada quando nao se sabe quantas vezes vai ser repetida.

#include <stdio.h>

int main()
{

    char a = 'a';

    while (!(a == 'z'))
    {
        puts("Digite z");
        a = getchar();
        printf("voce digitou %c", a);
    }

    return 0;
}

// Repetição com terminação forçada

#include <stdio.h>

int main()
{

    char a = 'a';

    while (1)
    {
        puts("Digite z");
        a = getchar();
        printf("voce digitou %c", a);
        if (a == 'z')
        {
            break;
        }
    }

    return 0;
}

// Repetição com pós condição // garante pelo menos uma vez que o conteudo do bloco execute diferente do while que precisa de uma condição

int main()
{

    int a = 0;

    do
    {
        printf("Digite 9\n");
        scanf("%d", &a);
    } while (!(a == 9));

    return 0;
}

// Repetição Encadeada

int main()
{

    int n = 10, i, c;

    for (i = 1; i <= n; i++)
    {
        for (c = 1; c <= n; c++)
        {
            printf("%c", 35);
        }
        printf("\n");
    }

    return 0;
}
