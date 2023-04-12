/*Um canhão atira um projétil que descreve a função f(t)=-9t²+120t, sendo que, f(t) é dado em metros e tem segundos. Desenvolva algoritmo que determine a altura do projétil. O usuário deve informar o tempo ( t ) que ele deseja saber a altura.*/

#include <stdio.h>
#include <math.h>

void main()
{
    float tempo, desenvolvimento, resultado, km;

    printf("Informe o tempo, em segundos, do projetil: ");
    scanf("%f", &tempo);
    desenvolvimento = pow(-9 * tempo, 2);
    resultado = desenvolvimento + 120 * tempo;
    km = resultado / 1000;

    printf("A resolucao ficou assim: F(t) = -9 * %.2f^2 + 120^%.2f\n", tempo, tempo);
    printf("A altura em metros sera F(t): %.2fm\n", resultado);
    printf("A altura em km sera F(t): %.2fkm", km);
}