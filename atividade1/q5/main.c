/*Considere a necessidade de desenvolver um algoritmo que calcule e apresente ao usuario o valor do volume (V) de uma esfera de raio (R). Onde o Pi é igaul a 3,13149.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float raio, raio_elevado, pi = 3.14159, volume;

    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    raio_elevado = pow(raio, 3);
    volume = (4 * pi * raio_elevado) / 3;

    printf("O valor do volume da esfera eh: %f", volume);
    return 0;
}