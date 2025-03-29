#include <stdio.h>
#define TAM 10

int main() {
    int salas[TAM];
    int i, somaMax, somaAtual;
    
    somaMax = salas[0];
    somaAtual = 0;
    
    for(i=0; i<TAM; i++) {
        printf("Informe a quantidade de vidas na %dª sala: ", i+1);
        scanf("%d", &salas[i]);
    }
    
    for(i=0; i<TAM; i++) {
        somaAtual += salas[i];
        if (somaAtual > somaMax) {
            somaMax = somaAtual;
        }
        
        if(somaAtual < 0) {
            somaAtual = 0;
        }
    }
    
    printf("A qntd máxima de vidas a serem ganhas é: %d", somaMax);
}