#include <stdio.h>
#define TAM 10

int main() {
	int vector[TAM];
	int vector2[TAM];
	int vector3[TAM];
	int i;

	//Primeiro vetor
	for (i=0; i<TAM; i++) {
	    printf("Informe o elemento da %dª posição: ", i);
	    scanf("%d", &vector[i]);
	}
	//Segundo vetor
	for (i=0; i<TAM; i++) {
	    printf("Informe o elemento da %dª posição: ", i);
	    scanf("%d", &vector2[i]);
	}
	//Comparar os dois vetores
	for (i=0; i<TAM; i++) {
	    if (vector[i] > vector2[i]) {
	        vector3[i] = vector[i];
	    } else {
            vector3[i] = vector2[i]; 
        }
    }
    
    printf("Vetor 3: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vector3[i]);
    }
    printf("\n");
}

