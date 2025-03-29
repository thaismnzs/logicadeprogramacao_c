#include <stdio.h>

int main() {
    float altZe = 1.10;
    float altChico = 1.50;
    int ano = 0;
    
  
    while (altZe <= altChico) {
        altZe += 0.03;
        altChico += 0.02;
        ano++;
    }
    
    printf("%d anos", ano);
}