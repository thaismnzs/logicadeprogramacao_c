#include <stdio.h>
#define TAM 20

int main() {
	int vector[TAM];
	int i;
	int maior, menor;
	int pos1=0, pos2=0;
	
	for (i=0; i<TAM; i++) {
	    printf("Informe o elemento da %dª posição: ", i);
	    scanf("%d", &vector[i]);
	}
	
	maior = vector[0];
	
	for (i=0; i<TAM; i++) {
	    if (vector[i] > maior) {
	        maior = vector[i];
	        pos1 = i;
	     }
	    }
	    
	    printf("Maior: %d\nPosição: %d", maior, pos1);
	    printf("\n");
	
	menor = vector[0];
	
	for (i=0; i<TAM; i++) {
	    if(vector[i] < menor){
	        menor = vector[i];
	        pos2 = i;
	    }
	}
	
	printf("Menor: %d\nPosição: %d", menor, pos2);
}