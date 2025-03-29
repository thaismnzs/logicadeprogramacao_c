#include <stdio.h>
#define TAM 15

int main(){
   int vector[TAM];
   int i, aux, contador;
   
   for(i=0; i<TAM; i++) {
       printf("%dº elemento: ", i+1);
       scanf("%d", &vector[i]);
   } 
   printf("Ordem atual:\n");
   
   for(i=0; i<TAM; i++) {
       printf("%d ", vector[i]);
   }
   
   //Bubble-sort
   for(contador=1; contador<TAM; contador++) {
       for(i=0; i<TAM-1; i++) {
           if(vector[i] > vector[i+1]) {
               aux = vector[i];
               vector[i] = vector[i+1];
               vector[i+1] = aux;
           }
       }
   }
   
   printf("Elementos ordenados:\n");
    for(i=0; i<TAM; i++) {
        printf("%d ", vector[i]);
    }
}
   