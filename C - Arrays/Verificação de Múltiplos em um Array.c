#include <stdio.h>
#define TAM 5

int main(){
    int vector[TAM];
    int i, n, multiplos = 0;
    
    for(i=0; i<TAM; i++) {
        printf("Informe o %dº elemento: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Informe um número para checar quantos múltiplos estão presentes no vetor: ");
    scanf("%d", &n);
    
    for(i=0; i<TAM; i++) {
    if(vector[i] % n == 0) {
        multiplos++;
        }
    }
        printf("Estão presentes %d múltiplos de %d no vetor.", multiplos, n);
}
   