#include <stdio.h>

int main()
{
    int l, c, n;
    puts("Tamanho");
    scanf("%d", &n);
    for (l = 0; l < n; l++)
    {
        for (c = 0; c < n; c++)
        {
            if (l >= c)
            {
                printf("#");
            }
        }
        puts("");
    }
    return 0;
}