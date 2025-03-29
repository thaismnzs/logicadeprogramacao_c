#include <stdio.h>
#define TAM 10

int main(){
    int vector[TAM];
    int i, n;
    int posicao = -1;
    
    for(i=0; i<TAM; i++){
        printf("%dº elemento: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Informe N: ");
    scanf("%d", &n);
    
    //Busca sequencial
    for(i=0; i<TAM; i++){
        if (vector[i] == n) {
            posicao = i;
            break; //o break serve pra parar de buscar após achar a primeira posição.
        }
    }
    
    if (posicao != -1) {
        printf("%d está presente na %dª posição.", n, posicao);
    } else {
        printf("%d", posicao);
    }
}

    
    
    