#include <stdio.h>

int main() {
	float v1[10]; //Primeiro vetor
	float v2[10]; //Segundo vetor
	float v3[10]; //Vetor soma
	int i;

	for (i=0; i<10; i++) {
		printf("Informe o valor da %dª posição: ", i);
		scanf("%f", &v1[i]);
	}	
	
	printf("Vetor 1: ");
		for (i=0; i<10; i++) {
		    printf("%.2f ", v1[i]);
		}
		printf("\n");

	for (i=0; i<10; i++) {
		printf("Informe o valor da %dª posição: ", i);
		scanf("%f", &v2[i]);
	}
	
	printf("Vetor 2: ");
		for (i=0; i<10; i++) {
		    printf("%.2f ", v2[i]);
		}
		printf("\n");
		
		for (i=0; i<10; i++) {
		    v3[i] = v2[i] + v1[i];
		}
		
		printf("Vetor 3 (Soma dos dois vetores anteriores: ");
		for (i=0; i<10; i++) {
		    printf("%.2f ", v3[i]);
}
}



