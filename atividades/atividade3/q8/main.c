#include <stdio.h>

int main()
{
    int n, iU = 0, iD = 0, iT = 0, iQ = 0;
    do
    {
        puts("Digite um numero");
        scanf("%d", &n);
        if (n >= 0 && n <= 25)
        {
            iU++;
        }
        else if (n >= 26 && n <= 50)
        {
            iD++;
        }
        else if (n >= 51 && n <= 75)
        {
            iT++;
        }
        else if (n >= 76)
        {
            iQ++;
        }
    } while (n >= 0);
    printf("[0-25]: %d\n", iU);
    printf("[26-50]: %d\n", iD);
    printf("[51-75]: %d\n", iT);
    printf("[76-inf]: %d\n", iQ);
    return 0;
}