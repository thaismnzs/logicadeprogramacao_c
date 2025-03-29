#include <stdio.h>

main() {
    int num;
    int n1, n2, n3, n4;
    
    printf("Informe o número da agência (4 digitos): ");
    scanf("%d", &num); 
    
    n4 = num / 1000;
    n3 = (num % 1000) / 100;
    n2 = (num % 100) / 10;
    n1 = (num % 10);
    
    int dv = (((n1*2) + (n2*3) + (n3*4) + (n4*5)) % 11) - 11;
    if (dv < 0) {
        dv = dv * (-1);
    }
    
    printf("%d - %d", num, dv);
    
}