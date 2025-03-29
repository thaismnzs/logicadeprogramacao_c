#include <stdio.h>
#define TAM 20

int main() {
	int vector[TAM];
	int i;
	int maior, menor;
	
	for (i=0; i<TAM; i++) {
	    printf("Informe o elemento da %dª posição: ", i);
	    scanf("%d", &vector[i]);
	}
	
	maior = vector[0];
	
	for (i=0; i<TAM; i++) {
	    if (vector[i] > maior) {
	        maior = vector[i];
	     }
	    }
	    
	    printf("Maior: %d", maior);
	    printf("\n");
	
	menor = vector[0];
	
	for (i=0; i<TAM; i++) {
	    if(vector[i] < menor){
	        menor = vector[i];
	    }
	}
	
	printf("Menor: %d", menor);
}