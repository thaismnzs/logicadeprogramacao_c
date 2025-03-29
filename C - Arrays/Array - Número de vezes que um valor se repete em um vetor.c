#include <stdio.h>
#define TAM 15

int main() {
    int vector[TAM];
    int valor;
    int i, contador;
    
    for (i = 0; i < TAM; i++) {
        printf("Informe o %dº elemento: ", i);
        scanf("%d", &vector[i]);
    }
 
    printf("Informe um valor inteiro: ");
    scanf("%d", &valor);
    
    for (i = 0; i < TAM; i++) {
        if (vector[i] == valor) {
            contador++;
        }
    }
     printf("O valor %d aparece %d vezes.", valor, contador);
}