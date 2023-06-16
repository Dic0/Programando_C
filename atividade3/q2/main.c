#include <stdio.h>

int main() {
	int c;
	for (c = 1000; c < 2000; c++) {
		if ((c % 11) == 5) {
			printf("Valor : %i\n", c);	
		}
	}
    return 0;
}