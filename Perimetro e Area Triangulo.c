#include <stdio.h>

main() {
	float l1, l2, l3;
	float perimetro;
	
	printf("Informe o valor dos 3 lados do triângulo: ");
	scanf("%f %f %f" ,&l1, &l2, &l3);
	
	perimetro = l1 + l2 + l3;
	
	printf("O perímetro do triângulo é igual a: %f" ,perimetro);
	
}