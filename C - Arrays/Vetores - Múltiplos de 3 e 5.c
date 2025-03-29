#include <stdio.h>
int main() {
    int n;
    
    printf("Informe n: ");
    scanf("%d", &n);
    
    int vector[n];
    int i;
    int m5=0, m3=0;
    
    for(i=0; i<n; i++){
        printf("Informe o %dº elemento do vetor: ", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Vetor: \n");
    for(i=0; i<n; i++){
        printf("%d ", vector[i]);
    printf("\n");
    
    if (vector[i] % 3 == 0) {
        m3++;
    }
    
    if (vector[i] % 5 == 0) {
        m5++;
    }
}
    printf("Múltiplos de 3: %d ", m3);
    printf("\n");
    printf("Múltiplos de 5: %d ", m5);
}