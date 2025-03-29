#include <stdio.h>
#define TAM 5

int main(){
    int vector[TAM];
    int i, j, contador;
    int maxRep = 0, rep; 
    int central;
    int soma = 0, media;
    
    for(i=0; i<TAM; i++){
        printf("%dº elemento: ", i);
        scanf("%d", &vector[i]);
    }
    
    //Moda
    for(i=0; i<TAM; i++){ 
        contador = 0; 
        for(j=0; j<TAM; j++){ 
            if (vector[i] == vector[j]) {
                contador++;
            }
        }
        
        if (contador > maxRep) {
            maxRep = contador;
            rep = vector[i];
        }
    }
    
    printf("Moda: %d\n", rep);
    
    //Mediana
    central = vector[TAM/2];
    printf("Mediana: %d\n", central);
        
    
    // Média
    for(i=0; i<TAM; i++){
        soma += vector[i];
    }
    media = soma / TAM;
    printf("Média: %d", media);
    }







