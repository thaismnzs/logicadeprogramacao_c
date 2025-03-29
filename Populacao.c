#include <stdio.h>

int main() {
  float populacaoA = 5000000, populacaoB = 7000000;
  int anos = 0;

    while (populacaoA <= populacaoB) {
  populacaoA = populacaoA + (populacaoA * 0.03);
  populacaoB = populacaoB + (populacaoB * 0.02);
  anos++;
    
    printf("Ano %d - População A: %.0f, População B: %.0f\n", anos, populacaoA, populacaoB);
    }
    
    printf("A população do país A ultrapassará a população do país B em %d anos.\n", anos);
    
    return 0;
}
  