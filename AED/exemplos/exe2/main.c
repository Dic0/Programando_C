#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printVetor(int v[], int size){
	int i;
	printf("\n\n[");
	for(i=0; i<size; i++){
		if(i<size-1)
			printf("%d ",v[i]);
		else
			printf("%d",v[i]);
	}
	printf("]\n\n");
}

int main(){
	srand(time(NULL));

	int i, v[5];
	for(i=0; i<5; i++){
		v[i] = rand()%6;
	}

	printVetor(v, 5);
}