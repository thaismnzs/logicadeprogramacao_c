#include <stdio.h>
#define TAM 10

int main(){
   int vector[TAM];
   int i;
   int contador;
   
   contador = 0;
   
   //Lendo os elementos do vetor
   for(i=0; i<TAM; i++) {
       printf("Informe o valor da %dª posição: \n", i);
       scanf("%d", &vector[i]);
   } 
   
   //Exibindo o vetor com os valores informados
   for(i=0; i<TAM; i++) {
   printf("%d \n", vector[i]);
    }
    
    //Exibindo os números pares
    printf("Números pares: ");
    for(i=0; i<TAM; i++) {
        if (vector[i] % 2 == 0) {
            printf("%d ", vector[i]);
            contador++; //Contando para apurar a quantidade
            
        }
    }
    //Printando a quantidade
    printf("\nQuantidade de números pares: %d", contador);
}