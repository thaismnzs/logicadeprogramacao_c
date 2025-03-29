#include <stdio.h>

main() {
	float base;
	float altura;
	float area;
	float perimetro;
	
	printf("Informe o valor da base e da altura do retângulo: ");
	scanf("%f %f" ,&base, &altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("Área: %f \n Perímetro: %f." ,area, perimetro);
	
}