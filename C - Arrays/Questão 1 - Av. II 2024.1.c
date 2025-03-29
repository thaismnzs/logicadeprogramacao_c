#include <stdio.h>

int main() {
    int n;
    int qtd;
    
    printf("Informe n: ");
    scanf("%d", &n);
    
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
     }else if (n % 2 != 0) {
        n = (n * 3) + 1;
    }
    qtd++;
        printf("%d ", n);
    }
    
    printf("Quantidade de passos: %d", qtd);
}