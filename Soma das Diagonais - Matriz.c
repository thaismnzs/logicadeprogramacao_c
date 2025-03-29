#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    int M[LINHA][COLUNA];
    int i, j;
    int somaSec=0, somaPri=0;
    
    for(i=0; i<LINHA; i++) {
        for(j=0; j<COLUNA; j++){
            printf("Informe o %dº elemento da %dª coluna: \n", (i+1), (j+1));
            scanf("%d", &M[i][j]);
        }
    }
    
    printf("Matriz informada:\n");
    for(i=0; i<LINHA; i++) {
        for(j=0; j<LINHA; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<LINHA; i++) {
        somaPri+= M[i][i]; //Soma da diagonal primária
    }
    printf("Soma da diagonal primária: %d\n", somaPri);
    
    for(i=0; i<LINHA; i++) {
        somaSec+= M[i][COLUNA-1-i]; //Soma da diagonal secundária
    }
    printf("Soma da diagonal secundária: %d", somaSec);
}
    