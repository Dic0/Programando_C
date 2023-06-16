#include <stdio.h>
int main()
{
    int c, l, n;
    puts("Digite um número");
    scanf("%i", &n);

    for (c = 1; c <= n; c++)
    {
        for (l = 1; l <= 10; l++)
        {
            printf("%i x %i = %i\n", c, l, c * l);
        }
        puts("");
    }
    return 0;
}