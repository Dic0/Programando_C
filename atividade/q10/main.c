/*Dada as coordenadas de dois pontos no espaço euclidiano didimensional, desenvolva algoritmo que informe a distância entre eles. Observe que, a partir de dois pontos indicados no plano cartesiano (p1, p2), podemos desenhar um triângulo cujas medidas dos catetos a e b são dadas pelas diferenças entre as ordenadas e abscissas desses pontos e cuja medida da hipotenusa c, dada pelo Teorema de Pitágoras, é justamente a distância entre os pontos considerados*/

#include <stdio.h>
#include <math.h>

int main()
{
    float coordenadaX1, coordenadaY1, coordenadaX2, coordenadaY2, a, b, resultado;

    printf("Informe a coordenada do plano x do seu primeiro ponto: ");
    scanf("%f", &coordenadaX1);
    printf("Informe a coordenada do plano y do seu primeiro ponto: ");
    scanf("%f", &coordenadaY1);
    printf("Informe a coordenada do plano x do seu segundo ponto: ");
    scanf("%f", &coordenadaX2);
    printf("Informe a coordenada do plano x do seu segundo ponto: ");
    scanf("%f", &coordenadaY2);

    a = pow(coordenadaX2 - coordenadaX1, 2);
    b = pow(coordenadaY2 - coordenadaY1, 2);
    resultado = sqrt(a + b);

    printf("A distancia entre a primeira cordenada e a segunda coordenada eh: %.2f", resultado);
    return 0;
}