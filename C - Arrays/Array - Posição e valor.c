#include <stdio.h>

int main(){
    int vector[20];
    int i;
    
    for (i=0; i<20; i++) {
        vector[i] = 0;
    }

    for (i=0; i<20; i++) {
    printf("Posição: %d  Valor: %d\n", i, vector[i]);
    }
}
   