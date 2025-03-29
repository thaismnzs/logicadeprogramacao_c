#include <stdio.h>
#define TAM 10

int main() {
	int vector[TAM];
	int i;
	int vector2[TAM];
	
	for (i=0; i<TAM; i++) {
	    printf("Informe o elemento da %dª posição: ", i);
	    scanf("%d", &vector[i]);
	}
	
	for (i=0; i<TAM; i++) {
	    vector2[i] = vector[i];
	}
	
	for (i=0; i<TAM; i++) {
	printf("%d ", vector2[i]);
    }
}