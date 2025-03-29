#include <stdio.h>

main() {
	int numero;
	int sucessor;
	
	printf("Informe um valor: ");
	scanf("%d" ,&numero);
	
	sucessor = numero++;
	
	printf("O sucessor de %d é %d." ,sucessor, numero);
}