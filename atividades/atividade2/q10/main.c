#include <stdio.h>

int main() {
	float x, y, z;
	printf("Digite o comprimento de cada lado de um triangulo\n");
	scanf("%f %f %f", &x, &y, &z);
	
	if ( (x < (y + z)) && (y < (x + z)) && (z < (x + y)) ) {
		if ((x == y) && (y == z)) {
			printf("Equilatero \n");
		} else if ((x == y) || (x == z) || (y == z)) {
			printf("Isosceles \n");
		} else if ((x != y) && (x != z) && (y != z)) {
			printf("Escaleno \n");
		}
	} else {
		printf("Nao e um triangulo\n");
	}
    return 0;
}