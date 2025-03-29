#include <stdio.h>

main() {
    int n1, n2;
    int quociente;
    int resto;
    
    printf("Informe dois números para realizar a divisão: ");
    scanf("%d %d" ,&n1, &n2);
    
    quociente = n1 / n2;
    resto = n1 % n2;
    
    printf("Quociente: %d \nResto: %d" ,quociente, resto);
	
}