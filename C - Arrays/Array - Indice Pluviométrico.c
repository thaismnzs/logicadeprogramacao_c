#include <stdio.h>
#define TAM 30

int main() {
    int junho[TAM];
    int i;
    int maior = junho[0];
    int menor = junho[0];
    int media1q = 0;
    int media2q = 0;
    
    for (i = 0; i < TAM; i++) {
        printf("Informe o índice pluviométrico do %dº dia de junho: ", i+1);
        scanf("%d", &junho[i]);
    }
    
    for (i = 0; i < TAM; i++) {
        if(junho[i] > maior) {
            maior = junho[i];
             
        }
        
    }
    printf("O dia que mais choveu no mês de junho foi o dia %d\n", i);
    
     for (i = 0; i < TAM; i++) {
        if(junho[i] < menor) {
            menor = junho[i];
        }
        
     }
     printf("O dia que menos choveu no mês de junho foi o dia %d\n", i);
     
      for (i = 0; i < TAM; i++) {
        media1q += junho[i]; 
      }
        media1q /= TAM/2;
        
        for (i = TAM/2; i < TAM; i++) {
        media2q += junho[i]; 
      }
        media2q /= TAM/2;
        
        printf("Média pluviométrica da 1ª quinzena: %d\n", media1q);
        printf("Média pluviométrica da 2ª quinzena: %d", media2q);
}
        
    