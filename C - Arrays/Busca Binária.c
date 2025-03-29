#include <stdio.h>
#define TAM 10

int main(){
    int vector[TAM];
    int i, n;
    int posicao = -1;
    int inicio = 0, fim = TAM-1, meio; 
    
    for(i=0; i<TAM; i++){
        printf("%dº elemento: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Informe N: ");
    scanf("%d", &n);
    
    //Busca binária
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vector[meio] == n) {
            posicao = meio;
            // Verifica se há ocorrências anteriores
            while (posicao > 0 && vector[posicao - 1] == n) {
                posicao--;
            }
            break;
        } else if (vector[meio] < n) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    
    if (posicao != -1) {
        printf("%d está presente na %dª posição.", n, posicao);
    } else {
        printf("%d", posicao);
    }
}

    
    
    