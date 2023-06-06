#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("O numero %d eh par", num) : printf("O numero %d eh impar", num);
    return 0;
}